
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_OperateLogGetRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_OperateLogGetRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/TimeRangeBean.h>
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
class HUAWEICLOUD_DBSS_V1_EXPORT  OperateLogGetRequest
    : public ModelBase
{
public:
    OperateLogGetRequest();
    virtual ~OperateLogGetRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OperateLogGetRequest members

    /// <summary>
    /// 
    /// </summary>

    TimeRangeBean getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const TimeRangeBean& value);

    /// <summary>
    /// 筛选角色用户获取操作日志
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 筛选操作对象名称获取操作日志
    /// </summary>

    std::string getOperateName() const;
    bool operateNameIsSet() const;
    void unsetoperateName();
    void setOperateName(const std::string& value);

    /// <summary>
    /// 根据执行结果获取操作日志 [success, fail]
    /// </summary>

    std::string getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::string& value);

    /// <summary>
    /// 页数
    /// </summary>

    std::string getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(const std::string& value);

    /// <summary>
    /// 每页条数
    /// </summary>

    std::string getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(const std::string& value);


protected:
    TimeRangeBean time_;
    bool timeIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string operateName_;
    bool operateNameIsSet_;
    std::string result_;
    bool resultIsSet_;
    std::string page_;
    bool pageIsSet_;
    std::string size_;
    bool sizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_OperateLogGetRequest_H_
