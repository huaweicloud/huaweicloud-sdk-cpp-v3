
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AttachWikiDetail_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AttachWikiDetail_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/SimpleProject.h>
#include <string>
#include <huaweicloud/projectman/v4/model/SimpleUser.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 关联Wiki详情
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  AttachWikiDetail
    : public ModelBase
{
public:
    AttachWikiDetail();
    virtual ~AttachWikiDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AttachWikiDetail members

    /// <summary>
    /// 工作项ID
    /// </summary>

    int32_t getIssueId() const;
    bool issueIdIsSet() const;
    void unsetissueId();
    void setIssueId(int32_t value);

    /// <summary>
    /// Wiki标题
    /// </summary>

    std::string getWikiTitle() const;
    bool wikiTitleIsSet() const;
    void unsetwikiTitle();
    void setWikiTitle(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SimpleUser getWikiAuthor() const;
    bool wikiAuthorIsSet() const;
    void unsetwikiAuthor();
    void setWikiAuthor(const SimpleUser& value);

    /// <summary>
    /// 
    /// </summary>

    SimpleProject getProject() const;
    bool projectIsSet() const;
    void unsetproject();
    void setProject(const SimpleProject& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetcreatedDate();
    void setCreatedDate(const std::string& value);

    /// <summary>
    /// wiki ID
    /// </summary>

    std::string getWikiId() const;
    bool wikiIdIsSet() const;
    void unsetwikiId();
    void setWikiId(const std::string& value);

    /// <summary>
    /// region值
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);


protected:
    int32_t issueId_;
    bool issueIdIsSet_;
    std::string wikiTitle_;
    bool wikiTitleIsSet_;
    SimpleUser wikiAuthor_;
    bool wikiAuthorIsSet_;
    SimpleProject project_;
    bool projectIsSet_;
    std::string createdDate_;
    bool createdDateIsSet_;
    std::string wikiId_;
    bool wikiIdIsSet_;
    std::string region_;
    bool regionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AttachWikiDetail_H_
