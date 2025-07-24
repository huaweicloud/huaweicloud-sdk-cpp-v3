
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CasePassRateVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CasePassRateVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
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
/// 计算用例通过率
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  CasePassRateVo
    : public ModelBase
{
public:
    CasePassRateVo();
    virtual ~CasePassRateVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CasePassRateVo members

    /// <summary>
    /// 用例通过率
    /// </summary>

    std::string getPassRate() const;
    bool passRateIsSet() const;
    void unsetpassRate();
    void setPassRate(const std::string& value);

    /// <summary>
    /// 用户自定义结果对应的用例数目
    /// </summary>

    std::vector<NameAndValueVo>& getResultNumberList();
    bool resultNumberListIsSet() const;
    void unsetresultNumberList();
    void setResultNumberList(const std::vector<NameAndValueVo>& value);


protected:
    std::string passRate_;
    bool passRateIsSet_;
    std::vector<NameAndValueVo> resultNumberList_;
    bool resultNumberListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CasePassRateVo_H_
