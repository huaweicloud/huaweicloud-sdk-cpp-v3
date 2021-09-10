
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_SearchFaceByUrlRequest_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_SearchFaceByUrlRequest_H_

#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/frs/v2/model/FaceSearchUrlReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_FRS_V2_EXPORT  SearchFaceByUrlRequest
    : public ModelBase
{
public:
    SearchFaceByUrlRequest();
    virtual ~SearchFaceByUrlRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SearchFaceByUrlRequest members

    /// <summary>
    /// 人脸库名称。
    /// </summary>

    std::string getFaceSetName() const;
    bool faceSetNameIsSet() const;
    void unsetfaceSetName();
    void setFaceSetName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    FaceSearchUrlReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const FaceSearchUrlReq& value);


protected:
    std::string faceSetName_;
    bool faceSetNameIsSet_;
    FaceSearchUrlReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SearchFaceByUrlRequest& dereference_from_shared_ptr(std::shared_ptr<SearchFaceByUrlRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_SearchFaceByUrlRequest_H_
