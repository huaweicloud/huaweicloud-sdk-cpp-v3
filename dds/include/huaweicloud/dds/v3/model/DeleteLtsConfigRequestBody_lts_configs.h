
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_DeleteLtsConfigRequestBody_lts_configs_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_DeleteLtsConfigRequestBody_lts_configs_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/LtsLogType.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  DeleteLtsConfigRequestBody_lts_configs
    : public ModelBase
{
public:
    DeleteLtsConfigRequestBody_lts_configs();
    virtual ~DeleteLtsConfigRequestBody_lts_configs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteLtsConfigRequestBody_lts_configs members

    /// <summary>
    /// 实例ID。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    LtsLogType getLogType() const;
    bool logTypeIsSet() const;
    void unsetlogType();
    void setLogType(const LtsLogType& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    LtsLogType logType_;
    bool logTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_DeleteLtsConfigRequestBody_lts_configs_H_
