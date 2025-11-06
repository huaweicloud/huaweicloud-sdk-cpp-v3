
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ResolveMergeRequestConflictsResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ResolveMergeRequestConflictsResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ResolveMergeRequestConflictsResponse
    : public ModelBase, public HttpResponse
{
public:
    ResolveMergeRequestConflictsResponse();
    virtual ~ResolveMergeRequestConflictsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResolveMergeRequestConflictsResponse members

    /// <summary>
    /// **参数解释：** prompt property name already exists    
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);


protected:
    std::string message_;
    bool messageIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ResolveMergeRequestConflictsResponse_H_
