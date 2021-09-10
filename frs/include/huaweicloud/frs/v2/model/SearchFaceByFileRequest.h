
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_SearchFaceByFileRequest_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_SearchFaceByFileRequest_H_

#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/frs/v2/model/SearchFaceByFileRequestBody.h>
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
class HUAWEICLOUD_FRS_V2_EXPORT  SearchFaceByFileRequest
    : public ModelBase
{
public:
    SearchFaceByFileRequest();
    virtual ~SearchFaceByFileRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SearchFaceByFileRequest members

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

    SearchFaceByFileRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const SearchFaceByFileRequestBody& value);


protected:
    std::string faceSetName_;
    bool faceSetNameIsSet_;
    SearchFaceByFileRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SearchFaceByFileRequest& dereference_from_shared_ptr(std::shared_ptr<SearchFaceByFileRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_SearchFaceByFileRequest_H_
