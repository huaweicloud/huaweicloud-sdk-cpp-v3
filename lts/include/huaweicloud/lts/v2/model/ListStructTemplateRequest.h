
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ListStructTemplateRequest_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ListStructTemplateRequest_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_LTS_V2_EXPORT  ListStructTemplateRequest
    : public ModelBase
{
public:
    ListStructTemplateRequest();
    virtual ~ListStructTemplateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListStructTemplateRequest members

    /// <summary>
    /// 该字段填为：application/json;charset&#x3D;UTF-8。
    /// </summary>

    std::string getContentType() const;
    bool contentTypeIsSet() const;
    void unsetcontentType();
    void setContentType(const std::string& value);

    /// <summary>
    /// 待查询模板id,非必填，不传时返回项目下所有自定义结构化模板
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    std::string contentType_;
    bool contentTypeIsSet_;
    std::string id_;
    bool idIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListStructTemplateRequest& dereference_from_shared_ptr(std::shared_ptr<ListStructTemplateRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ListStructTemplateRequest_H_
