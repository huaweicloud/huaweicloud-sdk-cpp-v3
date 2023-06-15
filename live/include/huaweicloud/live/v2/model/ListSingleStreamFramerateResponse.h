
#ifndef HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListSingleStreamFramerateResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListSingleStreamFramerateResponse_H_

#include <huaweicloud/live/v2/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/live/v2/model/V2FramerateInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LIVE_V2_EXPORT  ListSingleStreamFramerateResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSingleStreamFramerateResponse();
    virtual ~ListSingleStreamFramerateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListSingleStreamFramerateResponse members

    /// <summary>
    /// 用量详情。 
    /// </summary>

    std::vector<V2FramerateInfo>& getFramerateInfoList();
    bool framerateInfoListIsSet() const;
    void unsetframerateInfoList();
    void setFramerateInfoList(const std::vector<V2FramerateInfo>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::vector<V2FramerateInfo> framerateInfoList_;
    bool framerateInfoListIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListSingleStreamFramerateResponse_H_
