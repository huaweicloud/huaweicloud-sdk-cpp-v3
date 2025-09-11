
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_SQLStatisticsBean_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_SQLStatisticsBean_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  SQLStatisticsBean
    : public ModelBase
{
public:
    SQLStatisticsBean();
    virtual ~SQLStatisticsBean();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SQLStatisticsBean members

    /// <summary>
    /// 删除数量
    /// </summary>

    int64_t getDeleteNum() const;
    bool deleteNumIsSet() const;
    void unsetdeleteNum();
    void setDeleteNum(int64_t value);

    /// <summary>
    /// 插入数量
    /// </summary>

    int64_t getInsertNum() const;
    bool insertNumIsSet() const;
    void unsetinsertNum();
    void setInsertNum(int64_t value);

    /// <summary>
    /// 其他数量
    /// </summary>

    int64_t getOtherNum() const;
    bool otherNumIsSet() const;
    void unsetotherNum();
    void setOtherNum(int64_t value);

    /// <summary>
    /// 周期
    /// </summary>

    std::string getPeriod() const;
    bool periodIsSet() const;
    void unsetperiod();
    void setPeriod(const std::string& value);

    /// <summary>
    /// 查询数量
    /// </summary>

    int64_t getSelectNum() const;
    bool selectNumIsSet() const;
    void unsetselectNum();
    void setSelectNum(int64_t value);

    /// <summary>
    /// 更新数量
    /// </summary>

    int64_t getUpdateNum() const;
    bool updateNumIsSet() const;
    void unsetupdateNum();
    void setUpdateNum(int64_t value);


protected:
    int64_t deleteNum_;
    bool deleteNumIsSet_;
    int64_t insertNum_;
    bool insertNumIsSet_;
    int64_t otherNum_;
    bool otherNumIsSet_;
    std::string period_;
    bool periodIsSet_;
    int64_t selectNum_;
    bool selectNumIsSet_;
    int64_t updateNum_;
    bool updateNumIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_SQLStatisticsBean_H_
