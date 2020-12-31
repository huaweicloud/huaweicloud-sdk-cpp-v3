
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_ImportImageQuickRequest_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_ImportImageQuickRequest_H_

#include <huaweicloud/ims/ImsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/ims/model/QuickImportImageByFileRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_IMS_EXPORT  ImportImageQuickRequest
    : public ModelBase
{
public:
    ImportImageQuickRequest();
    virtual ~ImportImageQuickRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ImportImageQuickRequest members

    /// <summary>
    /// 
    /// </summary>

    QuickImportImageByFileRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const QuickImportImageByFileRequestBody& value);


protected:
    QuickImportImageByFileRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ImportImageQuickRequest& dereference_from_shared_ptr(std::shared_ptr<ImportImageQuickRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_ImportImageQuickRequest_H_
