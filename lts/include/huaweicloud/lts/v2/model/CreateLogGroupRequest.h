
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateLogGroupRequest_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateLogGroupRequest_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/CreateLogGroupParams.h>
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
class HUAWEICLOUD_LTS_V2_EXPORT  CreateLogGroupRequest
    : public ModelBase
{
public:
    CreateLogGroupRequest();
    virtual ~CreateLogGroupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateLogGroupRequest members

    /// <summary>
    /// 该字段填为：application/json;charset&#x3D;UTF-8。
    /// </summary>

    std::string getContentType() const;
    bool contentTypeIsSet() const;
    void unsetcontentType();
    void setContentType(const std::string& value);

    /// <summary>
    /// **参数解释：** 企业项目ID。获取方式请参见：[获取企业项目ID]。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** default。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateLogGroupParams getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateLogGroupParams& value);


protected:
    std::string contentType_;
    bool contentTypeIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    CreateLogGroupParams body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateLogGroupRequest& dereference_from_shared_ptr(std::shared_ptr<CreateLogGroupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateLogGroupRequest_H_
