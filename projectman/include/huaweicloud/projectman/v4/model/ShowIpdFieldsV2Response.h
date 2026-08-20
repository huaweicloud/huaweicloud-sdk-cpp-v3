
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowIpdFieldsV2Response_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowIpdFieldsV2Response_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/FieldVO.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ShowIpdFieldsV2Response
    : public ModelBase, public HttpResponse
{
public:
    ShowIpdFieldsV2Response();
    virtual ~ShowIpdFieldsV2Response();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowIpdFieldsV2Response members

    /// <summary>
    /// 响应状态码。标识查询工作项实例字段列表请求的处理结果。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 响应消息。请求失败时包含详细错误信息，可用于问题排查。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 字段列表结果。返回创建工作项实例时可选用的字段配置信息，包含字段ID、编码、名称、类型等属性，包含系统字段和项目自定义字段。
    /// </summary>

    std::vector<FieldVO>& getResult();
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::vector<FieldVO>& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::vector<FieldVO> result_;
    bool resultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowIpdFieldsV2Response_H_
