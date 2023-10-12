
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_ListCommonPoolsResponse_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_ListCommonPoolsResponse_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v3/model/CommonPoolDict.h>
#include <string>
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
class HUAWEICLOUD_EIP_V3_EXPORT  ListCommonPoolsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListCommonPoolsResponse();
    virtual ~ListCommonPoolsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCommonPoolsResponse members

    /// <summary>
    /// 功能说明：公共池对象
    /// </summary>

    std::vector<CommonPoolDict>& getCommonPools();
    bool commonPoolsIsSet() const;
    void unsetcommonPools();
    void setCommonPools(const std::vector<CommonPoolDict>& value);

    /// <summary>
    /// 本次请求的编号
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);


protected:
    std::vector<CommonPoolDict> commonPools_;
    bool commonPoolsIsSet_;
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

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_ListCommonPoolsResponse_H_
