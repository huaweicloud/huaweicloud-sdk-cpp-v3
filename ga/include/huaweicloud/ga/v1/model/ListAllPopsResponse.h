
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_ListAllPopsResponse_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_ListAllPopsResponse_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ga/v1/model/PageInfo.h>
#include <vector>
#include <huaweicloud/ga/v1/model/PopOuterDetail.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  ListAllPopsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAllPopsResponse();
    virtual ~ListAllPopsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAllPopsResponse members

    /// <summary>
    /// 接入点列表。
    /// </summary>

    std::vector<PopOuterDetail>& getPops();
    bool popsIsSet() const;
    void unsetpops();
    void setPops(const std::vector<PopOuterDetail>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfo getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfo& value);


protected:
    std::vector<PopOuterDetail> pops_;
    bool popsIsSet_;
    PageInfo pageInfo_;
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

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_ListAllPopsResponse_H_
