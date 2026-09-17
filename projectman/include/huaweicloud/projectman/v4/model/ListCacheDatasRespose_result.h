
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListCacheDatasRespose_result_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListCacheDatasRespose_result_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/FieldVO.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 查询缓存的返回结果。
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListCacheDatasRespose_result
    : public ModelBase
{
public:
    ListCacheDatasRespose_result();
    virtual ~ListCacheDatasRespose_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCacheDatasRespose_result members

    /// <summary>
    /// **参数解释：** 全部字段。
    /// </summary>

    std::vector<FieldVO>& getFields();
    bool fieldsIsSet() const;
    void unsetfields();
    void setFields(const std::vector<FieldVO>& value);

    /// <summary>
    /// **参数解释：** 表头显示字段。
    /// </summary>

    std::vector<FieldVO>& getVisibleFields();
    bool visibleFieldsIsSet() const;
    void unsetvisibleFields();
    void setVisibleFields(const std::vector<FieldVO>& value);


protected:
    std::vector<FieldVO> fields_;
    bool fieldsIsSet_;
    std::vector<FieldVO> visibleFields_;
    bool visibleFieldsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListCacheDatasRespose_result_H_
