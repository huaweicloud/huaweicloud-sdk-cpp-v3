
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_BatchDeleteFacesRequest_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_BatchDeleteFacesRequest_H_

#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/frs/v2/model/DeleteFacesBatchReq.h>

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
class HUAWEICLOUD_FRS_V2_EXPORT  BatchDeleteFacesRequest
    : public ModelBase
{
public:
    BatchDeleteFacesRequest();
    virtual ~BatchDeleteFacesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchDeleteFacesRequest members

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

    DeleteFacesBatchReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DeleteFacesBatchReq& value);


protected:
    std::string faceSetName_;
    bool faceSetNameIsSet_;
    DeleteFacesBatchReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchDeleteFacesRequest& dereference_from_shared_ptr(std::shared_ptr<BatchDeleteFacesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_BatchDeleteFacesRequest_H_
