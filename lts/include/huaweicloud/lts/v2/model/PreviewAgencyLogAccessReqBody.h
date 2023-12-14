
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_PreviewAgencyLogAccessReqBody_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_PreviewAgencyLogAccessReqBody_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  PreviewAgencyLogAccessReqBody
    : public ModelBase
{
public:
    PreviewAgencyLogAccessReqBody();
    virtual ~PreviewAgencyLogAccessReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PreviewAgencyLogAccessReqBody members

    /// <summary>
    /// 日志访问类型
    /// </summary>

    std::string getAgencyAccessType() const;
    bool agencyAccessTypeIsSet() const;
    void unsetagencyAccessType();
    void setAgencyAccessType(const std::string& value);

    /// <summary>
    /// 跨账号日志接入配置名称
    /// </summary>

    std::string getAgencyLogAccess() const;
    bool agencyLogAccessIsSet() const;
    void unsetagencyLogAccess();
    void setAgencyLogAccess(const std::string& value);

    /// <summary>
    /// 委托日志流名称
    /// </summary>

    std::string getLogAgencyStreamName() const;
    bool logAgencyStreamNameIsSet() const;
    void unsetlogAgencyStreamName();
    void setLogAgencyStreamName(const std::string& value);

    /// <summary>
    /// 委托日志流id
    /// </summary>

    std::string getLogAgencyStreamId() const;
    bool logAgencyStreamIdIsSet() const;
    void unsetlogAgencyStreamId();
    void setLogAgencyStreamId(const std::string& value);

    /// <summary>
    /// 委托日志组名称
    /// </summary>

    std::string getLogAgencyGroupName() const;
    bool logAgencyGroupNameIsSet() const;
    void unsetlogAgencyGroupName();
    void setLogAgencyGroupName(const std::string& value);

    /// <summary>
    /// 委托日志组id
    /// </summary>

    std::string getLogAgencyGroupId() const;
    bool logAgencyGroupIdIsSet() const;
    void unsetlogAgencyGroupId();
    void setLogAgencyGroupId(const std::string& value);

    /// <summary>
    /// 被委托日志流名称
    /// </summary>

    std::string getLogBeAgencystreamName() const;
    bool logBeAgencystreamNameIsSet() const;
    void unsetlogBeAgencystreamName();
    void setLogBeAgencystreamName(const std::string& value);

    /// <summary>
    /// 被委托日志流id
    /// </summary>

    std::string getLogBeAgencystreamId() const;
    bool logBeAgencystreamIdIsSet() const;
    void unsetlogBeAgencystreamId();
    void setLogBeAgencystreamId(const std::string& value);

    /// <summary>
    /// 被委托日志组名称
    /// </summary>

    std::string getLogBeAgencygroupName() const;
    bool logBeAgencygroupNameIsSet() const;
    void unsetlogBeAgencygroupName();
    void setLogBeAgencygroupName(const std::string& value);

    /// <summary>
    /// 被委托日志组id
    /// </summary>

    std::string getLogBeAgencygroupId() const;
    bool logBeAgencygroupIdIsSet() const;
    void unsetlogBeAgencygroupId();
    void setLogBeAgencygroupId(const std::string& value);

    /// <summary>
    /// 被委托项目id
    /// </summary>

    std::string getBeAgencyProjectId() const;
    bool beAgencyProjectIdIsSet() const;
    void unsetbeAgencyProjectId();
    void setBeAgencyProjectId(const std::string& value);

    /// <summary>
    /// 委托项目id
    /// </summary>

    std::string getAgencyProjectId() const;
    bool agencyProjectIdIsSet() const;
    void unsetagencyProjectId();
    void setAgencyProjectId(const std::string& value);

    /// <summary>
    /// 委托账号名称
    /// </summary>

    std::string getAgencyDomainName() const;
    bool agencyDomainNameIsSet() const;
    void unsetagencyDomainName();
    void setAgencyDomainName(const std::string& value);

    /// <summary>
    /// 委托名称
    /// </summary>

    std::string getAgencyName() const;
    bool agencyNameIsSet() const;
    void unsetagencyName();
    void setAgencyName(const std::string& value);


protected:
    std::string agencyAccessType_;
    bool agencyAccessTypeIsSet_;
    std::string agencyLogAccess_;
    bool agencyLogAccessIsSet_;
    std::string logAgencyStreamName_;
    bool logAgencyStreamNameIsSet_;
    std::string logAgencyStreamId_;
    bool logAgencyStreamIdIsSet_;
    std::string logAgencyGroupName_;
    bool logAgencyGroupNameIsSet_;
    std::string logAgencyGroupId_;
    bool logAgencyGroupIdIsSet_;
    std::string logBeAgencystreamName_;
    bool logBeAgencystreamNameIsSet_;
    std::string logBeAgencystreamId_;
    bool logBeAgencystreamIdIsSet_;
    std::string logBeAgencygroupName_;
    bool logBeAgencygroupNameIsSet_;
    std::string logBeAgencygroupId_;
    bool logBeAgencygroupIdIsSet_;
    std::string beAgencyProjectId_;
    bool beAgencyProjectIdIsSet_;
    std::string agencyProjectId_;
    bool agencyProjectIdIsSet_;
    std::string agencyDomainName_;
    bool agencyDomainNameIsSet_;
    std::string agencyName_;
    bool agencyNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_PreviewAgencyLogAccessReqBody_H_
