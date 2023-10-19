
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_DeleteFaceByExternalImageIdResponse_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_DeleteFaceByExternalImageIdResponse_H_


#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_FRS_V2_EXPORT  DeleteFaceByExternalImageIdResponse
    : public ModelBase, public HttpResponse
{
public:
    DeleteFaceByExternalImageIdResponse();
    virtual ~DeleteFaceByExternalImageIdResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteFaceByExternalImageIdResponse members

    /// <summary>
    /// 删除的人脸数量。 调用失败时无此字段。
    /// </summary>

    int32_t getFaceNumber() const;
    bool faceNumberIsSet() const;
    void unsetfaceNumber();
    void setFaceNumber(int32_t value);

    /// <summary>
    /// 人脸库ID。 调用失败时无此字段。
    /// </summary>

    std::string getFaceSetId() const;
    bool faceSetIdIsSet() const;
    void unsetfaceSetId();
    void setFaceSetId(const std::string& value);

    /// <summary>
    /// 人脸库名称。 调用失败时无此字段。
    /// </summary>

    std::string getFaceSetName() const;
    bool faceSetNameIsSet() const;
    void unsetfaceSetName();
    void setFaceSetName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    int32_t faceNumber_;
    bool faceNumberIsSet_;
    std::string faceSetId_;
    bool faceSetIdIsSet_;
    std::string faceSetName_;
    bool faceSetNameIsSet_;
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

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_DeleteFaceByExternalImageIdResponse_H_
