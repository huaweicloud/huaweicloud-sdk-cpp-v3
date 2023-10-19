
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_ShowFaceSetResponse_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_ShowFaceSetResponse_H_


#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/frs/v2/model/FaceSetInfo.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_FRS_V2_EXPORT  ShowFaceSetResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowFaceSetResponse();
    virtual ~ShowFaceSetResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowFaceSetResponse members

    /// <summary>
    /// 
    /// </summary>

    FaceSetInfo getFaceSetInfo() const;
    bool faceSetInfoIsSet() const;
    void unsetfaceSetInfo();
    void setFaceSetInfo(const FaceSetInfo& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    FaceSetInfo faceSetInfo_;
    bool faceSetInfoIsSet_;
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

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_ShowFaceSetResponse_H_
