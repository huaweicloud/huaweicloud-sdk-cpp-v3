
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_AddFacesByBase64Request_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_AddFacesByBase64Request_H_

#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/frs/v2/model/AddFacesBase64Req.h>
#include <string>

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
class HUAWEICLOUD_FRS_V2_EXPORT  AddFacesByBase64Request
    : public ModelBase
{
public:
    AddFacesByBase64Request();
    virtual ~AddFacesByBase64Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AddFacesByBase64Request members

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

    AddFacesBase64Req getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AddFacesBase64Req& value);


protected:
    std::string faceSetName_;
    bool faceSetNameIsSet_;
    AddFacesBase64Req body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AddFacesByBase64Request& dereference_from_shared_ptr(std::shared_ptr<AddFacesByBase64Request> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_AddFacesByBase64Request_H_
