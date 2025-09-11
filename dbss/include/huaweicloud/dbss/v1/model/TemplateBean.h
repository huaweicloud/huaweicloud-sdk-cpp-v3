
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_TemplateBean_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_TemplateBean_H_


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
/// 模板对象
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  TemplateBean
    : public ModelBase
{
public:
    TemplateBean();
    virtual ~TemplateBean();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TemplateBean members

    /// <summary>
    /// 数据库ID
    /// </summary>

    std::string getDbIds() const;
    bool dbIdsIsSet() const;
    void unsetdbIds();
    void setDbIds(const std::string& value);

    /// <summary>
    /// 数据库名称
    /// </summary>

    std::string getDbNames() const;
    bool dbNamesIsSet() const;
    void unsetdbNames();
    void setDbNames(const std::string& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDesc() const;
    bool descIsSet() const;
    void unsetdesc();
    void setDesc(const std::string& value);

    /// <summary>
    /// 周期
    /// </summary>

    std::string getFrequency() const;
    bool frequencyIsSet() const;
    void unsetfrequency();
    void setFrequency(const std::string& value);

    /// <summary>
    /// 类型 - COMPREHENSIVE: 综合报表 - COMPLIANCE: 合规报表 - DB_SPECIAL：数据库专项报表 - CLIENT_SPECIAL：客户端专项报表 - SQL_SPECIAL：SQL
    /// </summary>

    std::string getGroup() const;
    bool groupIsSet() const;
    void unsetgroup();
    void setGroup(const std::string& value);

    /// <summary>
    /// 模板ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 报表模板名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 状态 - OFF：已关闭 - ON：已开启
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 报表类型 - COMPREHENSIVE: 数据库安全综合报表 - COMPLIANCE: 数据库安全合规报表 - SOX: SOX-萨班斯报表 - PCI: 行业标准安全报表 - DB_ANALYSIS: 数据库服务器分析报表 - CLIENT_IP_ANALYSIS: 客户端IP分析报表 - SQL_DCL_COMMAND: DCL命令报表 - SQL_DDL_COMMAND: DDL命令报表 - SQL_DML_COMMAND: DML命令报表
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string dbIds_;
    bool dbIdsIsSet_;
    std::string dbNames_;
    bool dbNamesIsSet_;
    std::string desc_;
    bool descIsSet_;
    std::string frequency_;
    bool frequencyIsSet_;
    std::string group_;
    bool groupIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_TemplateBean_H_
