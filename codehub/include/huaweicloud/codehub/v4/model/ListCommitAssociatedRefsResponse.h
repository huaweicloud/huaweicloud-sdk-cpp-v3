
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListCommitAssociatedRefsResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListCommitAssociatedRefsResponse_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ListCommitAssociatedRefsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListCommitAssociatedRefsResponse();
    virtual ~ListCommitAssociatedRefsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCommitAssociatedRefsResponse members

    /// <summary>
    /// 分支/tag列表
    /// </summary>

    std::vector<std::string>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<std::string>& value);


protected:
    std::vector<std::string> body_;
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

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListCommitAssociatedRefsResponse_H_
