
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_OperationLogItem_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_OperationLogItem_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/OpExternalInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 操作
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  OperationLogItem
    : public ModelBase
{
public:
    OperationLogItem();
    virtual ~OperationLogItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OperationLogItem members

    /// <summary>
    /// 操作时间
    /// </summary>

    int64_t getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(int64_t value);

    /// <summary>
    /// 操作名称,当前已有的action为CREATE_JOB(创建任务),COMMIT_JOB(提交任务),SYSTEM_AUDIT_PASS(系统审核通过),ADMIN_AUDIT_PASS(管理员审核通过),AUDIT_NOT_PASS(审核未通过),TRAINING_FINISH(训练完成),UPLOADING_MODEL(上传语音模型),COMPLETE_JOB(任务完成)
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 操作者,USER(用户),ADMIN(管理员),SYSTEM(系统用户)
    /// </summary>

    std::string getOperator() const;
    bool operatorIsSet() const;
    void unsetoperator();
    void setOperator(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    OpExternalInfo getExternalInfo() const;
    bool externalInfoIsSet() const;
    void unsetexternalInfo();
    void setExternalInfo(const OpExternalInfo& value);


protected:
    int64_t time_;
    bool timeIsSet_;
    std::string action_;
    bool actionIsSet_;
    std::string operator_;
    bool operatorIsSet_;
    OpExternalInfo externalInfo_;
    bool externalInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_OperationLogItem_H_
