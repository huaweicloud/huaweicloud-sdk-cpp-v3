
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
    /// 操作日志用户名
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 动作名称 - CREATE：创建 - DELETE：删除 - DOWNLOAD：下载 - UPDATE：更新
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 执行结果 - success：成功 - fail：失败
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
    std::string action_;
    bool actionIsSet_;
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
