
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ReplayErrorSqlTemplateResp_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ReplayErrorSqlTemplateResp_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 回放异常SQL数据项
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ReplayErrorSqlTemplateResp
    : public ModelBase
{
public:
    ReplayErrorSqlTemplateResp();
    virtual ~ReplayErrorSqlTemplateResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReplayErrorSqlTemplateResp members

    /// <summary>
    /// SQL模板
    /// </summary>

    std::string getSqlTemplate() const;
    bool sqlTemplateIsSet() const;
    void unsetsqlTemplate();
    void setSqlTemplate(const std::string& value);

    /// <summary>
    /// 目标库昵称
    /// </summary>

    std::string getTargetName() const;
    bool targetNameIsSet() const;
    void unsettargetName();
    void setTargetName(const std::string& value);

    /// <summary>
    /// schema名称
    /// </summary>

    std::string getSchemaName() const;
    bool schemaNameIsSet() const;
    void unsetschemaName();
    void setSchemaName(const std::string& value);

    /// <summary>
    /// SQL类型
    /// </summary>

    std::string getQueryType() const;
    bool queryTypeIsSet() const;
    void unsetqueryType();
    void setQueryType(const std::string& value);

    /// <summary>
    /// 目标库类型
    /// </summary>

    std::string getTargetType() const;
    bool targetTypeIsSet() const;
    void unsettargetType();
    void setTargetType(const std::string& value);

    /// <summary>
    /// 归类的SQL数量
    /// </summary>

    int64_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int64_t value);


protected:
    std::string sqlTemplate_;
    bool sqlTemplateIsSet_;
    std::string targetName_;
    bool targetNameIsSet_;
    std::string schemaName_;
    bool schemaNameIsSet_;
    std::string queryType_;
    bool queryTypeIsSet_;
    std::string targetType_;
    bool targetTypeIsSet_;
    int64_t count_;
    bool countIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ReplayErrorSqlTemplateResp_H_
