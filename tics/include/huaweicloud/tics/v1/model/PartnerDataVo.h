
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_PartnerDataVo_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_PartnerDataVo_H_


#include <huaweicloud/tics/v1/TicsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/tics/v1/model/TicsDatasetColumn.h>
#include <string>
#include <cpprest/details/basic_types.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_TICS_V1_EXPORT  PartnerDataVo
    : public ModelBase
{
public:
    PartnerDataVo();
    virtual ~PartnerDataVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PartnerDataVo members

    /// <summary>
    /// 字段信息集合
    /// </summary>

    std::vector<TicsDatasetColumn>& getColumnList();
    bool columnListIsSet() const;
    void unsetcolumnList();
    void setColumnList(const std::vector<TicsDatasetColumn>& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    utility::datetime getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const utility::datetime& value);

    /// <summary>
    /// 数据类型，DWS.DWS类型数据集，LOCAL_CSV.本地文件类型数集据，MRS.HIVE类型数据集，MYSQL.MySql类型数据集，ORACLE.Oracle类型数据集，RDS.RDS类型数据集
    /// </summary>

    std::string getDataType() const;
    bool dataTypeIsSet() const;
    void unsetdataType();
    void setDataType(const std::string& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 数据集id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 数据集名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 参与方租户名称
    /// </summary>

    std::string getPartnerDomainName() const;
    bool partnerDomainNameIsSet() const;
    void unsetpartnerDomainName();
    void setPartnerDomainName(const std::string& value);


protected:
    std::vector<TicsDatasetColumn> columnList_;
    bool columnListIsSet_;
    utility::datetime createTime_;
    bool createTimeIsSet_;
    std::string dataType_;
    bool dataTypeIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string partnerDomainName_;
    bool partnerDomainNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_PartnerDataVo_H_
