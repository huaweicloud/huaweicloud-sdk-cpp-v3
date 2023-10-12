
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_ListPublicipsResponse_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_ListPublicipsResponse_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v3/model/PublicipSingleShowResp.h>
#include <string>
#include <huaweicloud/eip/v3/model/PageInfoOption.h>
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
class HUAWEICLOUD_EIP_V3_EXPORT  ListPublicipsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListPublicipsResponse();
    virtual ~ListPublicipsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPublicipsResponse members

    /// <summary>
    /// 本次请求的编号
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);

    /// <summary>
    /// 功能说明：弹性公网IP对象
    /// </summary>

    std::vector<PublicipSingleShowResp>& getPublicips();
    bool publicipsIsSet() const;
    void unsetpublicips();
    void setPublicips(const std::vector<PublicipSingleShowResp>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfoOption getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfoOption& value);

    /// <summary>
    /// 公网IP总条目数
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::string requestId_;
    bool requestIdIsSet_;
    std::vector<PublicipSingleShowResp> publicips_;
    bool publicipsIsSet_;
    PageInfoOption pageInfo_;
    bool pageInfoIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_ListPublicipsResponse_H_
