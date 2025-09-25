
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ProjectSimpleDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ProjectSimpleDto_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v3/model/NamespaceBasicDto.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V3_EXPORT  ProjectSimpleDto
    : public ModelBase
{
public:
    ProjectSimpleDto();
    virtual ~ProjectSimpleDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProjectSimpleDto members

    /// <summary>
    /// 项目id
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 项目描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 项目名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 项目名称
    /// </summary>

    std::string getNameWithNamespace() const;
    bool nameWithNamespaceIsSet() const;
    void unsetnameWithNamespace();
    void setNameWithNamespace(const std::string& value);

    /// <summary>
    /// 项目路径
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// 项目路径
    /// </summary>

    std::string getPathWithNamespace() const;
    bool pathWithNamespaceIsSet() const;
    void unsetpathWithNamespace();
    void setPathWithNamespace(const std::string& value);

    /// <summary>
    /// 开发模式
    /// </summary>

    std::string getDevelopMode() const;
    bool developModeIsSet() const;
    void unsetdevelopMode();
    void setDevelopMode(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// 是否归档
    /// </summary>

    bool isArchived() const;
    bool archivedIsSet() const;
    void unsetarchived();
    void setArchived(bool value);

    /// <summary>
    /// 是否为kia仓
    /// </summary>

    bool isIsKia() const;
    bool isKiaIsSet() const;
    void unsetisKia();
    void setIsKia(bool value);

    /// <summary>
    /// 项目url
    /// </summary>

    std::string getSshUrlToRepo() const;
    bool sshUrlToRepoIsSet() const;
    void unsetsshUrlToRepo();
    void setSshUrlToRepo(const std::string& value);

    /// <summary>
    /// 项目url
    /// </summary>

    std::string getHttpUrlToRepo() const;
    bool httpUrlToRepoIsSet() const;
    void unsethttpUrlToRepo();
    void setHttpUrlToRepo(const std::string& value);

    /// <summary>
    /// 项目url
    /// </summary>

    std::string getWebUrl() const;
    bool webUrlIsSet() const;
    void unsetwebUrl();
    void setWebUrl(const std::string& value);

    /// <summary>
    /// 项目readme url
    /// </summary>

    std::string getReadmeUrl() const;
    bool readmeUrlIsSet() const;
    void unsetreadmeUrl();
    void setReadmeUrl(const std::string& value);

    /// <summary>
    /// product id
    /// </summary>

    std::string getProductId() const;
    bool productIdIsSet() const;
    void unsetproductId();
    void setProductId(const std::string& value);

    /// <summary>
    /// product name
    /// </summary>

    std::string getProductName() const;
    bool productNameIsSet() const;
    void unsetproductName();
    void setProductName(const std::string& value);

    /// <summary>
    /// member mgnt mode
    /// </summary>

    int32_t getMemberMgntMode() const;
    bool memberMgntModeIsSet() const;
    void unsetmemberMgntMode();
    void setMemberMgntMode(int32_t value);

    /// <summary>
    /// visibility
    /// </summary>

    std::string getVisibility() const;
    bool visibilityIsSet() const;
    void unsetvisibility();
    void setVisibility(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NamespaceBasicDto getNamespace() const;
    bool namespaceIsSet() const;
    void unsetnamespace();
    void setNamespace(const NamespaceBasicDto& value);

    /// <summary>
    /// 项目类型
    /// </summary>

    std::string getRepoType() const;
    bool repoTypeIsSet() const;
    void unsetrepoType();
    void setRepoType(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string nameWithNamespace_;
    bool nameWithNamespaceIsSet_;
    std::string path_;
    bool pathIsSet_;
    std::string pathWithNamespace_;
    bool pathWithNamespaceIsSet_;
    std::string developMode_;
    bool developModeIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    bool archived_;
    bool archivedIsSet_;
    bool isKia_;
    bool isKiaIsSet_;
    std::string sshUrlToRepo_;
    bool sshUrlToRepoIsSet_;
    std::string httpUrlToRepo_;
    bool httpUrlToRepoIsSet_;
    std::string webUrl_;
    bool webUrlIsSet_;
    std::string readmeUrl_;
    bool readmeUrlIsSet_;
    std::string productId_;
    bool productIdIsSet_;
    std::string productName_;
    bool productNameIsSet_;
    int32_t memberMgntMode_;
    bool memberMgntModeIsSet_;
    std::string visibility_;
    bool visibilityIsSet_;
    NamespaceBasicDto namespace_;
    bool namespaceIsSet_;
    std::string repoType_;
    bool repoTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ProjectSimpleDto_H_
