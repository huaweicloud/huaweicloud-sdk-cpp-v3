
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowControlResponse_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowControlResponse_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rgc/v1/model/Artifact.h>
#include <string>
#include <cpprest/details/basic_types.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  ShowControlResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowControlResponse();
    virtual ~ShowControlResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowControlResponse members

    /// <summary>
    /// 控制策略ID。
    /// </summary>

    std::string getIdentifier() const;
    bool identifierIsSet() const;
    void unsetidentifier();
    void setIdentifier(const std::string& value);

    /// <summary>
    /// 服务控制策略（SCP），配置规则。
    /// </summary>

    std::string getImplementation() const;
    bool implementationIsSet() const;
    void unsetimplementation();
    void setImplementation(const std::string& value);

    /// <summary>
    /// 控制策略必须性。
    /// </summary>

    std::string getGuidance() const;
    bool guidanceIsSet() const;
    void unsetguidance();
    void setGuidance(const std::string& value);

    /// <summary>
    /// 治理资源。
    /// </summary>

    std::vector<std::string>& getResource();
    bool resourceIsSet() const;
    void unsetresource();
    void setResource(const std::vector<std::string>& value);

    /// <summary>
    /// 控制策略所属服务。
    /// </summary>

    std::string getService() const;
    bool serviceIsSet() const;
    void unsetservice();
    void setService(const std::string& value);

    /// <summary>
    /// 控制策略类型。包括主动性控制策略Proactive、检测性控制策略Detective、预防性控制策略Preventive。
    /// </summary>

    std::string getBehavior() const;
    bool behaviorIsSet() const;
    void unsetbehavior();
    void setBehavior(const std::string& value);

    /// <summary>
    /// 控制策略目标。
    /// </summary>

    std::string getControlObjective() const;
    bool controlObjectiveIsSet() const;
    void unsetcontrolObjective();
    void setControlObjective(const std::string& value);

    /// <summary>
    /// 治理策略来自的框架。
    /// </summary>

    std::vector<std::string>& getFramework();
    bool frameworkIsSet() const;
    void unsetframework();
    void setFramework(const std::vector<std::string>& value);

    /// <summary>
    /// 控制策略内容。
    /// </summary>

    std::vector<Artifact>& getArtifacts();
    bool artifactsIsSet() const;
    void unsetartifacts();
    void setArtifacts(const std::vector<Artifact>& value);

    /// <summary>
    /// 控制策略别名。
    /// </summary>

    std::vector<std::string>& getAliases();
    bool aliasesIsSet() const;
    void unsetaliases();
    void setAliases(const std::vector<std::string>& value);

    /// <summary>
    /// 纳管账号的创建来源，包括CUSTOM和RGC。
    /// </summary>

    std::string getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const std::string& value);

    /// <summary>
    /// 控制策略严重性。
    /// </summary>

    std::string getSeverity() const;
    bool severityIsSet() const;
    void unsetseverity();
    void setSeverity(const std::string& value);

    /// <summary>
    /// 控制策略版本。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 控制策略发布时间。
    /// </summary>

    utility::datetime getReleaseDate() const;
    bool releaseDateIsSet() const;
    void unsetreleaseDate();
    void setReleaseDate(const utility::datetime& value);


protected:
    std::string identifier_;
    bool identifierIsSet_;
    std::string implementation_;
    bool implementationIsSet_;
    std::string guidance_;
    bool guidanceIsSet_;
    std::vector<std::string> resource_;
    bool resourceIsSet_;
    std::string service_;
    bool serviceIsSet_;
    std::string behavior_;
    bool behaviorIsSet_;
    std::string controlObjective_;
    bool controlObjectiveIsSet_;
    std::vector<std::string> framework_;
    bool frameworkIsSet_;
    std::vector<Artifact> artifacts_;
    bool artifactsIsSet_;
    std::vector<std::string> aliases_;
    bool aliasesIsSet_;
    std::string owner_;
    bool ownerIsSet_;
    std::string severity_;
    bool severityIsSet_;
    std::string version_;
    bool versionIsSet_;
    utility::datetime releaseDate_;
    bool releaseDateIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowControlResponse_H_
