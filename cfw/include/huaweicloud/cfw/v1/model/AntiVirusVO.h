
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_AntiVirusVO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_AntiVirusVO_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  AntiVirusVO
    : public ModelBase
{
public:
    AntiVirusVO();
    virtual ~AntiVirusVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AntiVirusVO members

    /// <summary>
    /// 反病毒开关状态，0表示关闭，1表示开启
    /// </summary>

    int32_t getAntiVirusStatus() const;
    bool antiVirusStatusIsSet() const;
    void unsetantiVirusStatus();
    void setAntiVirusStatus(int32_t value);

    /// <summary>
    /// 防护对象id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 防护对象名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    int32_t antiVirusStatus_;
    bool antiVirusStatusIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_AntiVirusVO_H_
