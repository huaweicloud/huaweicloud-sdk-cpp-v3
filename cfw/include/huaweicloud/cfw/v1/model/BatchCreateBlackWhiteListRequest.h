
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_BatchCreateBlackWhiteListRequest_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_BatchCreateBlackWhiteListRequest_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/AddBlackWhiteBatchDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  BatchCreateBlackWhiteListRequest
    : public ModelBase
{
public:
    BatchCreateBlackWhiteListRequest();
    virtual ~BatchCreateBlackWhiteListRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchCreateBlackWhiteListRequest members

    /// <summary>
    /// 
    /// </summary>

    AddBlackWhiteBatchDto getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AddBlackWhiteBatchDto& value);


protected:
    AddBlackWhiteBatchDto body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchCreateBlackWhiteListRequest& dereference_from_shared_ptr(std::shared_ptr<BatchCreateBlackWhiteListRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_BatchCreateBlackWhiteListRequest_H_
