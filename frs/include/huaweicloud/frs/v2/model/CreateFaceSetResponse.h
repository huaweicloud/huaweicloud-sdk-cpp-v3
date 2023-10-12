
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_CreateFaceSetResponse_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_CreateFaceSetResponse_H_


#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/frs/v2/model/FaceSetInfo.h>

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
class HUAWEICLOUD_FRS_V2_EXPORT  CreateFaceSetResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateFaceSetResponse();
    virtual ~CreateFaceSetResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateFaceSetResponse members

    /// <summary>
    /// 
    /// </summary>

    FaceSetInfo getFaceSetInfo() const;
    bool faceSetInfoIsSet() const;
    void unsetfaceSetInfo();
    void setFaceSetInfo(const FaceSetInfo& value);


protected:
    FaceSetInfo faceSetInfo_;
    bool faceSetInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_CreateFaceSetResponse_H_
