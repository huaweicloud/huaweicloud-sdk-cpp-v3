
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_VersionTestCasesChangeStatisticsVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_VersionTestCasesChangeStatisticsVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实际的数据类型：单个对象，集合 或 NULL
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  VersionTestCasesChangeStatisticsVo
    : public ModelBase
{
public:
    VersionTestCasesChangeStatisticsVo();
    virtual ~VersionTestCasesChangeStatisticsVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VersionTestCasesChangeStatisticsVo members

    /// <summary>
    /// 新增用例数
    /// </summary>

    int32_t getAddTestcasesNumber() const;
    bool addTestcasesNumberIsSet() const;
    void unsetaddTestcasesNumber();
    void setAddTestcasesNumber(int32_t value);

    /// <summary>
    /// 复用用例数
    /// </summary>

    int32_t getReuseTestcasesNumber() const;
    bool reuseTestcasesNumberIsSet() const;
    void unsetreuseTestcasesNumber();
    void setReuseTestcasesNumber(int32_t value);

    /// <summary>
    /// 修改用例数
    /// </summary>

    int32_t getModifyingTestcasesNumber() const;
    bool modifyingTestcasesNumberIsSet() const;
    void unsetmodifyingTestcasesNumber();
    void setModifyingTestcasesNumber(int32_t value);

    /// <summary>
    /// 修改时间时间戳
    /// </summary>

    int64_t getUpdateDateTimestamp() const;
    bool updateDateTimestampIsSet() const;
    void unsetupdateDateTimestamp();
    void setUpdateDateTimestamp(int64_t value);

    /// <summary>
    /// 修改时间
    /// </summary>

    utility::datetime getUpdateDate() const;
    bool updateDateIsSet() const;
    void unsetupdateDate();
    void setUpdateDate(const utility::datetime& value);


protected:
    int32_t addTestcasesNumber_;
    bool addTestcasesNumberIsSet_;
    int32_t reuseTestcasesNumber_;
    bool reuseTestcasesNumberIsSet_;
    int32_t modifyingTestcasesNumber_;
    bool modifyingTestcasesNumberIsSet_;
    int64_t updateDateTimestamp_;
    bool updateDateTimestampIsSet_;
    utility::datetime updateDate_;
    bool updateDateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_VersionTestCasesChangeStatisticsVo_H_
