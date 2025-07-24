
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ReportDimVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ReportDimVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 对比维度数据
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ReportDimVo
    : public ModelBase
{
public:
    ReportDimVo();
    virtual ~ReportDimVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReportDimVo members

    /// <summary>
    /// id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 值
    /// </summary>

    int32_t getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ReportDimVo_H_
