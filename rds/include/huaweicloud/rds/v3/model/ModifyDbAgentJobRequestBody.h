
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifyDbAgentJobRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifyDbAgentJobRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改数据库代理作业请求体。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ModifyDbAgentJobRequestBody
    : public ModelBase
{
public:
    ModifyDbAgentJobRequestBody();
    virtual ~ModifyDbAgentJobRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyDbAgentJobRequestBody members

    /// <summary>
    /// 配置文件id。
    /// </summary>

    std::string getProfileId() const;
    bool profileIdIsSet() const;
    void unsetprofileId();
    void setProfileId(const std::string& value);


protected:
    std::string profileId_;
    bool profileIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifyDbAgentJobRequestBody_H_
