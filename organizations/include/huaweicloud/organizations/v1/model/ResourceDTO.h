
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ResourceDTO_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ResourceDTO_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/organizations/v1/model/Match.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 资源信息。
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  ResourceDTO
    : public ModelBase
{
public:
    ResourceDTO();
    virtual ~ResourceDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceDTO members

    /// <summary>
    /// 资源Id。
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 资源名称。
    /// </summary>

    std::string getResourceName() const;
    bool resourceNameIsSet() const;
    void unsetresourceName();
    void setResourceName(const std::string& value);

    /// <summary>
    /// 资源标签列表。
    /// </summary>

    std::vector<Match>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<Match>& value);


protected:
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::string resourceName_;
    bool resourceNameIsSet_;
    std::vector<Match> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ResourceDTO_H_
