
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_ListPublicipPoolResponse_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_ListPublicipPoolResponse_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/eip/v3/model/PageInfoOption.h>
#include <vector>
#include <huaweicloud/eip/v3/model/PublicipPoolShowResp.h>

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
class HUAWEICLOUD_EIP_V3_EXPORT  ListPublicipPoolResponse
    : public ModelBase, public HttpResponse
{
public:
    ListPublicipPoolResponse();
    virtual ~ListPublicipPoolResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPublicipPoolResponse members

    /// <summary>
    /// 功能说明：公网池对象
    /// </summary>

    std::vector<PublicipPoolShowResp>& getPublicipPools();
    bool publicipPoolsIsSet() const;
    void unsetpublicipPools();
    void setPublicipPools(const std::vector<PublicipPoolShowResp>& value);

    /// <summary>
    /// 本次请求的编号
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfoOption getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfoOption& value);


protected:
    std::vector<PublicipPoolShowResp> publicipPools_;
    bool publicipPoolsIsSet_;
    std::string requestId_;
    bool requestIdIsSet_;
    PageInfoOption pageInfo_;
    bool pageInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_ListPublicipPoolResponse_H_
