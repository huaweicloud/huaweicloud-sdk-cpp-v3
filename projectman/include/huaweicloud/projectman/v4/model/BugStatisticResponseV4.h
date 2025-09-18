
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BugStatisticResponseV4_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BugStatisticResponseV4_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Bug信息
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  BugStatisticResponseV4
    : public ModelBase
{
public:
    BugStatisticResponseV4();
    virtual ~BugStatisticResponseV4();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BugStatisticResponseV4 members

    /// <summary>
    /// 重要程度为关键的缺陷数
    /// </summary>

    int32_t getCriticalNum() const;
    bool criticalNumIsSet() const;
    void unsetcriticalNum();
    void setCriticalNum(int32_t value);

    /// <summary>
    /// DI
    /// </summary>

    double getDefectIndex() const;
    bool defectIndexIsSet() const;
    void unsetdefectIndex();
    void setDefectIndex(double value);

    /// <summary>
    /// 模块
    /// </summary>

    std::string getModule() const;
    bool moduleIsSet() const;
    void unsetmodule();
    void setModule(const std::string& value);

    /// <summary>
    /// 重要程度为一般的缺陷数
    /// </summary>

    int32_t getNormalNum() const;
    bool normalNumIsSet() const;
    void unsetnormalNum();
    void setNormalNum(int32_t value);

    /// <summary>
    /// 重要程度为严重的缺陷数
    /// </summary>

    int32_t getSeriousNum() const;
    bool seriousNumIsSet() const;
    void unsetseriousNum();
    void setSeriousNum(int32_t value);

    /// <summary>
    /// 重要程度为提示的缺陷数
    /// </summary>

    int32_t getTipNum() const;
    bool tipNumIsSet() const;
    void unsettipNum();
    void setTipNum(int32_t value);

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    int32_t criticalNum_;
    bool criticalNumIsSet_;
    double defectIndex_;
    bool defectIndexIsSet_;
    std::string module_;
    bool moduleIsSet_;
    int32_t normalNum_;
    bool normalNumIsSet_;
    int32_t seriousNum_;
    bool seriousNumIsSet_;
    int32_t tipNum_;
    bool tipNumIsSet_;
    int32_t total_;
    bool totalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BugStatisticResponseV4_H_
