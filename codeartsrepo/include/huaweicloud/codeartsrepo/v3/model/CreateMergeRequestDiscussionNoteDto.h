
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_CreateMergeRequestDiscussionNoteDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_CreateMergeRequestDiscussionNoteDto_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  CreateMergeRequestDiscussionNoteDto
    : public ModelBase
{
public:
    CreateMergeRequestDiscussionNoteDto();
    virtual ~CreateMergeRequestDiscussionNoteDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateMergeRequestDiscussionNoteDto members

    /// <summary>
    /// 检视意见内容
    /// </summary>

    std::string getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::string& value);


protected:
    std::string body_;
    bool bodyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_CreateMergeRequestDiscussionNoteDto_H_
