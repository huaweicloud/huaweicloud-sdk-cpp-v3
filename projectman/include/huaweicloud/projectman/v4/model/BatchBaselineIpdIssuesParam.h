
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchBaselineIpdIssuesParam_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchBaselineIpdIssuesParam_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/projectman/v4/model/BatchBaselineIpdIssuesParam_attribute.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  BatchBaselineIpdIssuesParam
    : public ModelBase
{
public:
    BatchBaselineIpdIssuesParam();
    virtual ~BatchBaselineIpdIssuesParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchBaselineIpdIssuesParam members

    /// <summary>
    /// 需要基线的工作项ID数组。可以通过查询工作项列表或者查询树状工作项接口获取，响应消息体中的id字段的值就是工作项ID。
    /// </summary>

    std::vector<std::string>& getId();
    bool idIsSet() const;
    void unsetid();
    void setId(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    BatchBaselineIpdIssuesParam_attribute getAttribute() const;
    bool attributeIsSet() const;
    void unsetattribute();
    void setAttribute(const BatchBaselineIpdIssuesParam_attribute& value);


protected:
    std::vector<std::string> id_;
    bool idIsSet_;
    BatchBaselineIpdIssuesParam_attribute attribute_;
    bool attributeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchBaselineIpdIssuesParam_H_
