
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListReplicationProfilesResult_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListReplicationProfilesResult_H_


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
/// 发布订配置文件响应信息。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListReplicationProfilesResult
    : public ModelBase
{
public:
    ListReplicationProfilesResult();
    virtual ~ListReplicationProfilesResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListReplicationProfilesResult members

    /// <summary>
    /// 配置文件id。
    /// </summary>

    std::string getProfileId() const;
    bool profileIdIsSet() const;
    void unsetprofileId();
    void setProfileId(const std::string& value);

    /// <summary>
    /// 配置文件名。
    /// </summary>

    std::string getProfileName() const;
    bool profileNameIsSet() const;
    void unsetprofileName();
    void setProfileName(const std::string& value);

    /// <summary>
    /// 代理类型。  snapshot：快照代理 log_reader：日志读取器代理 distribution：分发代理 merge:合并代理 queue_reader：队列读取器代理。
    /// </summary>

    std::string getAgentType() const;
    bool agentTypeIsSet() const;
    void unsetagentType();
    void setAgentType(const std::string& value);

    /// <summary>
    /// 配置文件说明。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 是否为默认配置。  true：是默认配置。 false：不是默认配置。
    /// </summary>

    bool isIsDefProfile() const;
    bool isDefProfileIsSet() const;
    void unsetisDefProfile();
    void setIsDefProfile(bool value);


protected:
    std::string profileId_;
    bool profileIdIsSet_;
    std::string profileName_;
    bool profileNameIsSet_;
    std::string agentType_;
    bool agentTypeIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    bool isDefProfile_;
    bool isDefProfileIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListReplicationProfilesResult_H_
