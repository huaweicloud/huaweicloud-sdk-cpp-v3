
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_DeleteTransferRequest_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_DeleteTransferRequest_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  DeleteTransferRequest
    : public ModelBase
{
public:
    DeleteTransferRequest();
    virtual ~DeleteTransferRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteTransferRequest members

    /// <summary>
    /// 该字段填为：application/json;charset&#x3D;UTF-8。
    /// </summary>

    std::string getContentType() const;
    bool contentTypeIsSet() const;
    void unsetcontentType();
    void setContentType(const std::string& value);

    /// <summary>
    /// 日志转储ID。获取ID有3种方式： 1. 调用查询日志转储接口，返回值有日志转储ID  2. 调用新增日志转储接口，返回值有日志转储ID 3. 调用删除日志转储接口，返回值有日志转储ID
    /// </summary>

    std::string getLogTransferId() const;
    bool logTransferIdIsSet() const;
    void unsetlogTransferId();
    void setLogTransferId(const std::string& value);


protected:
    std::string contentType_;
    bool contentTypeIsSet_;
    std::string logTransferId_;
    bool logTransferIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteTransferRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteTransferRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_DeleteTransferRequest_H_
