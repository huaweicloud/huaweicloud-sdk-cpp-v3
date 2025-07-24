
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DefectVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DefectVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/cloudtest/v1/model/NameAndValueVo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 整体缺陷信息
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  DefectVo
    : public ModelBase
{
public:
    DefectVo();
    virtual ~DefectVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DefectVo members

    /// <summary>
    /// 缺陷数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 未关闭缺陷数
    /// </summary>

    int32_t getNotSolved() const;
    bool notSolvedIsSet() const;
    void unsetnotSolved();
    void setNotSolved(int32_t value);

    /// <summary>
    /// 组装缺陷每种重要程度的名称和对应的数目
    /// </summary>

    std::vector<NameAndValueVo>& getSeverityNumberList();
    bool severityNumberListIsSet() const;
    void unsetseverityNumberList();
    void setSeverityNumberList(const std::vector<NameAndValueVo>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    int32_t notSolved_;
    bool notSolvedIsSet_;
    std::vector<NameAndValueVo> severityNumberList_;
    bool severityNumberListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DefectVo_H_
