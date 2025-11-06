
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListMergeRequestSystemNotesResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListMergeRequestSystemNotesResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/codeartsrepo/v4/model/NoteDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ListMergeRequestSystemNotesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListMergeRequestSystemNotesResponse();
    virtual ~ListMergeRequestSystemNotesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListMergeRequestSystemNotesResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<NoteDto>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<NoteDto>& value);


protected:
    std::vector<NoteDto> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListMergeRequestSystemNotesResponse_H_
