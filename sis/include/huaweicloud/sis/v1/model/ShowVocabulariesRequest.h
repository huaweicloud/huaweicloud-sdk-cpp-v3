
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_ShowVocabulariesRequest_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_ShowVocabulariesRequest_H_

#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sis/v1/model/ShowVocabulariesParams.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_SIS_V1_EXPORT  ShowVocabulariesRequest
    : public ModelBase
{
public:
    ShowVocabulariesRequest();
    virtual ~ShowVocabulariesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowVocabulariesRequest members

    /// <summary>
    /// 
    /// </summary>

    ShowVocabulariesParams getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ShowVocabulariesParams& value);


protected:
    ShowVocabulariesParams body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowVocabulariesRequest& dereference_from_shared_ptr(std::shared_ptr<ShowVocabulariesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_ShowVocabulariesRequest_H_
