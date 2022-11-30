
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_ListPublicBorderGroupsResponse_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_ListPublicBorderGroupsResponse_H_

#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/eip/v3/model/CommonPoolsWithBorderGroupDict.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  ListPublicBorderGroupsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListPublicBorderGroupsResponse();
    virtual ~ListPublicBorderGroupsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListPublicBorderGroupsResponse members

    /// <summary>
    /// 功能说明：公共池分组对象
    /// </summary>

    std::vector<CommonPoolsWithBorderGroupDict>& getPublicBorderGroups();
    bool publicBorderGroupsIsSet() const;
    void unsetpublicBorderGroups();
    void setPublicBorderGroups(const std::vector<CommonPoolsWithBorderGroupDict>& value);

    /// <summary>
    /// 本次请求的编号
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);


protected:
    std::vector<CommonPoolsWithBorderGroupDict> publicBorderGroups_;
    bool publicBorderGroupsIsSet_;
    std::string requestId_;
    bool requestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_ListPublicBorderGroupsResponse_H_
