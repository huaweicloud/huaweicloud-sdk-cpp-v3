
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListReplicationErrorsResult_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListReplicationErrorsResult_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 发布订阅报错详情。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListReplicationErrorsResult
    : public ModelBase
{
public:
    ListReplicationErrorsResult();
    virtual ~ListReplicationErrorsResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListReplicationErrorsResult members

    /// <summary>
    /// 报错发生时间。
    /// </summary>

    std::string getOccurTime() const;
    bool occurTimeIsSet() const;
    void unsetoccurTime();
    void setOccurTime(const std::string& value);

    /// <summary>
    /// 错误源类型id。
    /// </summary>

    std::string getSourceTypeId() const;
    bool sourceTypeIdIsSet() const;
    void unsetsourceTypeId();
    void setSourceTypeId(const std::string& value);

    /// <summary>
    /// 错误源名称。
    /// </summary>

    std::string getSourceName() const;
    bool sourceNameIsSet() const;
    void unsetsourceName();
    void setSourceName(const std::string& value);

    /// <summary>
    /// 错误代码。
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);

    /// <summary>
    /// 错误消息。
    /// </summary>

    std::string getErrorText() const;
    bool errorTextIsSet() const;
    void unseterrorText();
    void setErrorText(const std::string& value);


protected:
    std::string occurTime_;
    bool occurTimeIsSet_;
    std::string sourceTypeId_;
    bool sourceTypeIdIsSet_;
    std::string sourceName_;
    bool sourceNameIsSet_;
    std::string errorCode_;
    bool errorCodeIsSet_;
    std::string errorText_;
    bool errorTextIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListReplicationErrorsResult_H_
