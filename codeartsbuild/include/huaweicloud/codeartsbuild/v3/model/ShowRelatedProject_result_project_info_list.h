
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowRelatedProject_result_project_info_list_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowRelatedProject_result_project_info_list_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ShowRelatedProject_result_project_info_list
    : public ModelBase
{
public:
    ShowRelatedProject_result_project_info_list();
    virtual ~ShowRelatedProject_result_project_info_list();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRelatedProject_result_project_info_list members

    /// <summary>
    /// 唯一标识
    /// </summary>

    std::string getIdentifier() const;
    bool identifierIsSet() const;
    void unsetidentifier();
    void setIdentifier(const std::string& value);

    /// <summary>
    /// 项目名
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 用户ID
    /// </summary>

    std::string getAuthorId() const;
    bool authorIdIsSet() const;
    void unsetauthorId();
    void setAuthorId(const std::string& value);

    /// <summary>
    /// 是否为项目创建者
    /// </summary>

    bool isIsCreator() const;
    bool isCreatorIsSet() const;
    void unsetisCreator();
    void setIsCreator(bool value);

    /// <summary>
    /// 项目创建者租户ID
    /// </summary>

    std::string getAuthorDomainId() const;
    bool authorDomainIdIsSet() const;
    void unsetauthorDomainId();
    void setAuthorDomainId(const std::string& value);


protected:
    std::string identifier_;
    bool identifierIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string authorId_;
    bool authorIdIsSet_;
    bool isCreator_;
    bool isCreatorIsSet_;
    std::string authorDomainId_;
    bool authorDomainIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowRelatedProject_result_project_info_list_H_
