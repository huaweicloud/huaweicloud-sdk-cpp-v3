
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SupabaseHaConfig_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SupabaseHaConfig_H_


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
/// HA配置。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  SupabaseHaConfig
    : public ModelBase
{
public:
    SupabaseHaConfig();
    virtual ~SupabaseHaConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SupabaseHaConfig members

    /// <summary>
    /// 
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getReplicationMode() const;
    bool replicationModeIsSet() const;
    void unsetreplicationMode();
    void setReplicationMode(const std::string& value);


protected:
    std::string mode_;
    bool modeIsSet_;
    std::string replicationMode_;
    bool replicationModeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SupabaseHaConfig_H_
