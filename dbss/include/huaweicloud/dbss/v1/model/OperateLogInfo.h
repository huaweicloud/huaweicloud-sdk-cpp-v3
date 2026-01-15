
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_OperateLogInfo_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_OperateLogInfo_H_


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
class HUAWEICLOUD_DBSS_V1_EXPORT  OperateLogInfo
    : public ModelBase
{
public:
    OperateLogInfo();
    virtual ~OperateLogInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OperateLogInfo members

    /// <summary>
    /// 操作日志ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 操作日志用户名
    /// </summary>

    std::string getUser() const;
    bool userIsSet() const;
    void unsetuser();
    void setUser(const std::string& value);

    /// <summary>
    /// 该条记录发生的时间，格式为时间戳。
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);

    /// <summary>
    /// 该条记录的操作类型 - create：创建 - update：更新 - delete：删除 - download：下载
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 该条记录的功能类型
    /// </summary>

    std::string getFunction() const;
    bool functionIsSet() const;
    void unsetfunction();
    void setFunction(const std::string& value);

    /// <summary>
    /// 该条记录对应的用户操作对象
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 该条记录具体的描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 该条记录对应用户执行的结果 - success：成功 - fail：失败
    /// </summary>

    std::string getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string user_;
    bool userIsSet_;
    std::string time_;
    bool timeIsSet_;
    std::string action_;
    bool actionIsSet_;
    std::string function_;
    bool functionIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string result_;
    bool resultIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_OperateLogInfo_H_
