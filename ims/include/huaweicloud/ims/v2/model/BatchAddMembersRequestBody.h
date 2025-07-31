
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_BatchAddMembersRequestBody_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_BatchAddMembersRequestBody_H_


#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量添加镜像成员body
/// </summary>
class HUAWEICLOUD_IMS_V2_EXPORT  BatchAddMembersRequestBody
    : public ModelBase
{
public:
    BatchAddMembersRequestBody();
    virtual ~BatchAddMembersRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchAddMembersRequestBody members

    /// <summary>
    /// 镜像ID列表
    /// </summary>

    std::vector<std::string>& getImages();
    bool imagesIsSet() const;
    void unsetimages();
    void setImages(const std::vector<std::string>& value);

    /// <summary>
    /// 项目ID列表
    /// </summary>

    std::vector<std::string>& getProjects();
    bool projectsIsSet() const;
    void unsetprojects();
    void setProjects(const std::vector<std::string>& value);

    /// <summary>
    /// 账号ID列表
    /// </summary>

    std::vector<std::string>& getDomains();
    bool domainsIsSet() const;
    void unsetdomains();
    void setDomains(const std::vector<std::string>& value);

    /// <summary>
    /// 组织URN列表
    /// </summary>

    std::vector<std::string>& getOrganizations();
    bool organizationsIsSet() const;
    void unsetorganizations();
    void setOrganizations(const std::vector<std::string>& value);


protected:
    std::vector<std::string> images_;
    bool imagesIsSet_;
    std::vector<std::string> projects_;
    bool projectsIsSet_;
    std::vector<std::string> domains_;
    bool domainsIsSet_;
    std::vector<std::string> organizations_;
    bool organizationsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_BatchAddMembersRequestBody_H_
