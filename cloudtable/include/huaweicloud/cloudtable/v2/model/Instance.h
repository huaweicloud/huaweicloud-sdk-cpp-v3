
#ifndef HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_Instance_H_
#define HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_Instance_H_


#include <huaweicloud/cloudtable/v2/CloudTableExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtable/v2/model/Nics.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 集群的实例对象。
/// </summary>
class HUAWEICLOUD_CLOUDTABLE_V2_EXPORT  Instance
    : public ModelBase
{
public:
    Instance();
    virtual ~Instance();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Instance members

    /// <summary>
    /// 集群所在可用区的ID。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// CloudTable集群计算单元节点数目，至少为2。
    /// </summary>

    int32_t getCuNum() const;
    bool cuNumIsSet() const;
    void unsetcuNum();
    void setCuNum(int32_t value);

    /// <summary>
    /// CloudTable集群Lemon节点数目。
    /// </summary>

    int32_t getLemonNum() const;
    bool lemonNumIsSet() const;
    void unsetlemonNum();
    void setLemonNum(int32_t value);

    /// <summary>
    /// 集群所在网络信息。
    /// </summary>

    std::vector<Nics>& getNics();
    bool nicsIsSet() const;
    void unsetnics();
    void setNics(const std::vector<Nics>& value);

    /// <summary>
    /// CloudTable集群TSD节点数目，至少为2。
    /// </summary>

    int32_t getTsdNum() const;
    bool tsdNumIsSet() const;
    void unsettsdNum();
    void setTsdNum(int32_t value);


protected:
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    int32_t cuNum_;
    bool cuNumIsSet_;
    int32_t lemonNum_;
    bool lemonNumIsSet_;
    std::vector<Nics> nics_;
    bool nicsIsSet_;
    int32_t tsdNum_;
    bool tsdNumIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_Instance_H_
