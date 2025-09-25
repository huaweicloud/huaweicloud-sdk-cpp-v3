
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListFileUpperTreeEntriesResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListFileUpperTreeEntriesResponse_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/codehub/v4/model/TreeDto.h>

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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ListFileUpperTreeEntriesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListFileUpperTreeEntriesResponse();
    virtual ~ListFileUpperTreeEntriesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListFileUpperTreeEntriesResponse members

    /// <summary>
    /// 获取当前文件上级树结构
    /// </summary>

    std::vector<TreeDto>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<TreeDto>& value);


protected:
    std::vector<TreeDto> body_;
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

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListFileUpperTreeEntriesResponse_H_
