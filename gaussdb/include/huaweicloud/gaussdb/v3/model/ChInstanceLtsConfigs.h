
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChInstanceLtsConfigs_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChInstanceLtsConfigs_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/ChInstanceLtsConfigs_instance.h>
#include <vector>
#include <huaweicloud/gaussdb/v3/model/ChLtsConfigs.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ChInstanceLtsConfigs
    : public ModelBase
{
public:
    ChInstanceLtsConfigs();
    virtual ~ChInstanceLtsConfigs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChInstanceLtsConfigs members

    /// <summary>
    /// 实例LTS配置信息。
    /// </summary>

    std::vector<ChLtsConfigs>& getLtsConfigs();
    bool ltsConfigsIsSet() const;
    void unsetltsConfigs();
    void setLtsConfigs(const std::vector<ChLtsConfigs>& value);

    /// <summary>
    /// 
    /// </summary>

    ChInstanceLtsConfigs_instance getInstance() const;
    bool instanceIsSet() const;
    void unsetinstance();
    void setInstance(const ChInstanceLtsConfigs_instance& value);


protected:
    std::vector<ChLtsConfigs> ltsConfigs_;
    bool ltsConfigsIsSet_;
    ChInstanceLtsConfigs_instance instance_;
    bool instanceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChInstanceLtsConfigs_H_
