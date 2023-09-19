

#include "huaweicloud/ocr/v1/model/VehicleCertificateResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




VehicleCertificateResult::VehicleCertificateResult()
{
    certificateNumber_ = "";
    certificateNumberIsSet_ = false;
    issueDate_ = "";
    issueDateIsSet_ = false;
    manufactureName_ = "";
    manufactureNameIsSet_ = false;
    vehicleBrand_ = "";
    vehicleBrandIsSet_ = false;
    vehicleName_ = "";
    vehicleNameIsSet_ = false;
    vehicleModel_ = "";
    vehicleModelIsSet_ = false;
    vin_ = "";
    vinIsSet_ = false;
    vehicleColor_ = "";
    vehicleColorIsSet_ = false;
    chassisModel_ = "";
    chassisModelIsSet_ = false;
    chassisId_ = "";
    chassisIdIsSet_ = false;
    chassisCertificateNumber_ = "";
    chassisCertificateNumberIsSet_ = false;
    engineModel_ = "";
    engineModelIsSet_ = false;
    engineNumber_ = "";
    engineNumberIsSet_ = false;
    fuelType_ = "";
    fuelTypeIsSet_ = false;
    displacement_ = "";
    displacementIsSet_ = false;
    power_ = "";
    powerIsSet_ = false;
    emissionStandard_ = "";
    emissionStandardIsSet_ = false;
    fuelConsumption_ = "";
    fuelConsumptionIsSet_ = false;
    overallDimensionLength_ = "";
    overallDimensionLengthIsSet_ = false;
    overallDimensionWidth_ = "";
    overallDimensionWidthIsSet_ = false;
    overallDimensionHeight_ = "";
    overallDimensionHeightIsSet_ = false;
    containerDimensionLength_ = "";
    containerDimensionLengthIsSet_ = false;
    containerDimensionWidth_ = "";
    containerDimensionWidthIsSet_ = false;
    containerDimensionHeight_ = "";
    containerDimensionHeightIsSet_ = false;
    springQuantity_ = "";
    springQuantityIsSet_ = false;
    tireQuantity_ = "";
    tireQuantityIsSet_ = false;
    tireSize_ = "";
    tireSizeIsSet_ = false;
    frontWheelTrack_ = "";
    frontWheelTrackIsSet_ = false;
    rearWheelTrack_ = "";
    rearWheelTrackIsSet_ = false;
    wheelbase_ = "";
    wheelbaseIsSet_ = false;
    axleLoad_ = "";
    axleLoadIsSet_ = false;
    axleQuantity_ = "";
    axleQuantityIsSet_ = false;
    steeringForm_ = "";
    steeringFormIsSet_ = false;
    totalWeight_ = "";
    totalWeightIsSet_ = false;
    equipmentWeight_ = "";
    equipmentWeightIsSet_ = false;
    maximumLadenMass_ = "";
    maximumLadenMassIsSet_ = false;
    massUtilizationCoefficient_ = "";
    massUtilizationCoefficientIsSet_ = false;
    tractionWeight_ = "";
    tractionWeightIsSet_ = false;
    maximumLoadMass_ = "";
    maximumLoadMassIsSet_ = false;
    cabPassengerCapacity_ = "";
    cabPassengerCapacityIsSet_ = false;
    passengerCapacity_ = "";
    passengerCapacityIsSet_ = false;
    maxDesignSpeed_ = "";
    maxDesignSpeedIsSet_ = false;
    manufactureDate_ = "";
    manufactureDateIsSet_ = false;
    confidenceIsSet_ = false;
    textLocationIsSet_ = false;
}

VehicleCertificateResult::~VehicleCertificateResult() = default;

void VehicleCertificateResult::validate()
{
}

web::json::value VehicleCertificateResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(certificateNumberIsSet_) {
        val[utility::conversions::to_string_t("certificate_number")] = ModelBase::toJson(certificateNumber_);
    }
    if(issueDateIsSet_) {
        val[utility::conversions::to_string_t("issue_date")] = ModelBase::toJson(issueDate_);
    }
    if(manufactureNameIsSet_) {
        val[utility::conversions::to_string_t("manufacture_name")] = ModelBase::toJson(manufactureName_);
    }
    if(vehicleBrandIsSet_) {
        val[utility::conversions::to_string_t("vehicle_brand")] = ModelBase::toJson(vehicleBrand_);
    }
    if(vehicleNameIsSet_) {
        val[utility::conversions::to_string_t("vehicle_name")] = ModelBase::toJson(vehicleName_);
    }
    if(vehicleModelIsSet_) {
        val[utility::conversions::to_string_t("vehicle_model")] = ModelBase::toJson(vehicleModel_);
    }
    if(vinIsSet_) {
        val[utility::conversions::to_string_t("vin")] = ModelBase::toJson(vin_);
    }
    if(vehicleColorIsSet_) {
        val[utility::conversions::to_string_t("vehicle_color")] = ModelBase::toJson(vehicleColor_);
    }
    if(chassisModelIsSet_) {
        val[utility::conversions::to_string_t("chassis_model")] = ModelBase::toJson(chassisModel_);
    }
    if(chassisIdIsSet_) {
        val[utility::conversions::to_string_t("chassis_id")] = ModelBase::toJson(chassisId_);
    }
    if(chassisCertificateNumberIsSet_) {
        val[utility::conversions::to_string_t("chassis_certificate_number")] = ModelBase::toJson(chassisCertificateNumber_);
    }
    if(engineModelIsSet_) {
        val[utility::conversions::to_string_t("engine_model")] = ModelBase::toJson(engineModel_);
    }
    if(engineNumberIsSet_) {
        val[utility::conversions::to_string_t("engine_number")] = ModelBase::toJson(engineNumber_);
    }
    if(fuelTypeIsSet_) {
        val[utility::conversions::to_string_t("fuel_type")] = ModelBase::toJson(fuelType_);
    }
    if(displacementIsSet_) {
        val[utility::conversions::to_string_t("displacement")] = ModelBase::toJson(displacement_);
    }
    if(powerIsSet_) {
        val[utility::conversions::to_string_t("power")] = ModelBase::toJson(power_);
    }
    if(emissionStandardIsSet_) {
        val[utility::conversions::to_string_t("emission_standard")] = ModelBase::toJson(emissionStandard_);
    }
    if(fuelConsumptionIsSet_) {
        val[utility::conversions::to_string_t("fuel_consumption")] = ModelBase::toJson(fuelConsumption_);
    }
    if(overallDimensionLengthIsSet_) {
        val[utility::conversions::to_string_t("overall_dimension_length")] = ModelBase::toJson(overallDimensionLength_);
    }
    if(overallDimensionWidthIsSet_) {
        val[utility::conversions::to_string_t("overall_dimension_width")] = ModelBase::toJson(overallDimensionWidth_);
    }
    if(overallDimensionHeightIsSet_) {
        val[utility::conversions::to_string_t("overall_dimension_height")] = ModelBase::toJson(overallDimensionHeight_);
    }
    if(containerDimensionLengthIsSet_) {
        val[utility::conversions::to_string_t("container_dimension_length")] = ModelBase::toJson(containerDimensionLength_);
    }
    if(containerDimensionWidthIsSet_) {
        val[utility::conversions::to_string_t("container_dimension_width")] = ModelBase::toJson(containerDimensionWidth_);
    }
    if(containerDimensionHeightIsSet_) {
        val[utility::conversions::to_string_t("container_dimension_height")] = ModelBase::toJson(containerDimensionHeight_);
    }
    if(springQuantityIsSet_) {
        val[utility::conversions::to_string_t("spring_quantity")] = ModelBase::toJson(springQuantity_);
    }
    if(tireQuantityIsSet_) {
        val[utility::conversions::to_string_t("tire_quantity")] = ModelBase::toJson(tireQuantity_);
    }
    if(tireSizeIsSet_) {
        val[utility::conversions::to_string_t("tire_size")] = ModelBase::toJson(tireSize_);
    }
    if(frontWheelTrackIsSet_) {
        val[utility::conversions::to_string_t("front_wheel_track")] = ModelBase::toJson(frontWheelTrack_);
    }
    if(rearWheelTrackIsSet_) {
        val[utility::conversions::to_string_t("rear_wheel_track")] = ModelBase::toJson(rearWheelTrack_);
    }
    if(wheelbaseIsSet_) {
        val[utility::conversions::to_string_t("wheelbase")] = ModelBase::toJson(wheelbase_);
    }
    if(axleLoadIsSet_) {
        val[utility::conversions::to_string_t("axle_load")] = ModelBase::toJson(axleLoad_);
    }
    if(axleQuantityIsSet_) {
        val[utility::conversions::to_string_t("axle_quantity")] = ModelBase::toJson(axleQuantity_);
    }
    if(steeringFormIsSet_) {
        val[utility::conversions::to_string_t("steering_form")] = ModelBase::toJson(steeringForm_);
    }
    if(totalWeightIsSet_) {
        val[utility::conversions::to_string_t("total_weight")] = ModelBase::toJson(totalWeight_);
    }
    if(equipmentWeightIsSet_) {
        val[utility::conversions::to_string_t("equipment_weight")] = ModelBase::toJson(equipmentWeight_);
    }
    if(maximumLadenMassIsSet_) {
        val[utility::conversions::to_string_t("maximum_laden_mass")] = ModelBase::toJson(maximumLadenMass_);
    }
    if(massUtilizationCoefficientIsSet_) {
        val[utility::conversions::to_string_t("mass_utilization_coefficient")] = ModelBase::toJson(massUtilizationCoefficient_);
    }
    if(tractionWeightIsSet_) {
        val[utility::conversions::to_string_t("traction_weight")] = ModelBase::toJson(tractionWeight_);
    }
    if(maximumLoadMassIsSet_) {
        val[utility::conversions::to_string_t("maximum_load_mass")] = ModelBase::toJson(maximumLoadMass_);
    }
    if(cabPassengerCapacityIsSet_) {
        val[utility::conversions::to_string_t("cab_passenger_capacity")] = ModelBase::toJson(cabPassengerCapacity_);
    }
    if(passengerCapacityIsSet_) {
        val[utility::conversions::to_string_t("passenger_capacity")] = ModelBase::toJson(passengerCapacity_);
    }
    if(maxDesignSpeedIsSet_) {
        val[utility::conversions::to_string_t("max_design_speed")] = ModelBase::toJson(maxDesignSpeed_);
    }
    if(manufactureDateIsSet_) {
        val[utility::conversions::to_string_t("manufacture_date")] = ModelBase::toJson(manufactureDate_);
    }
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }
    if(textLocationIsSet_) {
        val[utility::conversions::to_string_t("text_location")] = ModelBase::toJson(textLocation_);
    }

    return val;
}

bool VehicleCertificateResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("certificate_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("manufacture_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("manufacture_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManufactureName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vehicle_brand"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vehicle_brand"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVehicleBrand(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vehicle_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vehicle_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVehicleName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vehicle_model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vehicle_model"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVehicleModel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vin"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vin"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vehicle_color"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vehicle_color"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVehicleColor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("chassis_model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chassis_model"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChassisModel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("chassis_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chassis_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChassisId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("chassis_certificate_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chassis_certificate_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChassisCertificateNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_model"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineModel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fuel_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fuel_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFuelType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("displacement"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("displacement"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplacement(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("power"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("power"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPower(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("emission_standard"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("emission_standard"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEmissionStandard(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fuel_consumption"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fuel_consumption"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFuelConsumption(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("overall_dimension_length"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("overall_dimension_length"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOverallDimensionLength(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("overall_dimension_width"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("overall_dimension_width"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOverallDimensionWidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("overall_dimension_height"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("overall_dimension_height"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOverallDimensionHeight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("container_dimension_length"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("container_dimension_length"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContainerDimensionLength(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("container_dimension_width"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("container_dimension_width"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContainerDimensionWidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("container_dimension_height"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("container_dimension_height"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContainerDimensionHeight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spring_quantity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spring_quantity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpringQuantity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tire_quantity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tire_quantity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTireQuantity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tire_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tire_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTireSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("front_wheel_track"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("front_wheel_track"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrontWheelTrack(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rear_wheel_track"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rear_wheel_track"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRearWheelTrack(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wheelbase"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wheelbase"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWheelbase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("axle_load"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("axle_load"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAxleLoad(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("axle_quantity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("axle_quantity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAxleQuantity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("steering_form"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("steering_form"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSteeringForm(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_weight"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_weight"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalWeight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("equipment_weight"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("equipment_weight"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEquipmentWeight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maximum_laden_mass"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maximum_laden_mass"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaximumLadenMass(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mass_utilization_coefficient"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mass_utilization_coefficient"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMassUtilizationCoefficient(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("traction_weight"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("traction_weight"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTractionWeight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maximum_load_mass"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maximum_load_mass"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaximumLoadMass(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cab_passenger_capacity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cab_passenger_capacity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCabPassengerCapacity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("passenger_capacity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("passenger_capacity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPassengerCapacity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_design_speed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_design_speed"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxDesignSpeed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("manufacture_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("manufacture_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManufactureDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confidence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confidence"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfidence(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("text_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text_location"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTextLocation(refVal);
        }
    }
    return ok;
}

std::string VehicleCertificateResult::getCertificateNumber() const
{
    return certificateNumber_;
}

void VehicleCertificateResult::setCertificateNumber(const std::string& value)
{
    certificateNumber_ = value;
    certificateNumberIsSet_ = true;
}

bool VehicleCertificateResult::certificateNumberIsSet() const
{
    return certificateNumberIsSet_;
}

void VehicleCertificateResult::unsetcertificateNumber()
{
    certificateNumberIsSet_ = false;
}

std::string VehicleCertificateResult::getIssueDate() const
{
    return issueDate_;
}

void VehicleCertificateResult::setIssueDate(const std::string& value)
{
    issueDate_ = value;
    issueDateIsSet_ = true;
}

bool VehicleCertificateResult::issueDateIsSet() const
{
    return issueDateIsSet_;
}

void VehicleCertificateResult::unsetissueDate()
{
    issueDateIsSet_ = false;
}

std::string VehicleCertificateResult::getManufactureName() const
{
    return manufactureName_;
}

void VehicleCertificateResult::setManufactureName(const std::string& value)
{
    manufactureName_ = value;
    manufactureNameIsSet_ = true;
}

bool VehicleCertificateResult::manufactureNameIsSet() const
{
    return manufactureNameIsSet_;
}

void VehicleCertificateResult::unsetmanufactureName()
{
    manufactureNameIsSet_ = false;
}

std::string VehicleCertificateResult::getVehicleBrand() const
{
    return vehicleBrand_;
}

void VehicleCertificateResult::setVehicleBrand(const std::string& value)
{
    vehicleBrand_ = value;
    vehicleBrandIsSet_ = true;
}

bool VehicleCertificateResult::vehicleBrandIsSet() const
{
    return vehicleBrandIsSet_;
}

void VehicleCertificateResult::unsetvehicleBrand()
{
    vehicleBrandIsSet_ = false;
}

std::string VehicleCertificateResult::getVehicleName() const
{
    return vehicleName_;
}

void VehicleCertificateResult::setVehicleName(const std::string& value)
{
    vehicleName_ = value;
    vehicleNameIsSet_ = true;
}

bool VehicleCertificateResult::vehicleNameIsSet() const
{
    return vehicleNameIsSet_;
}

void VehicleCertificateResult::unsetvehicleName()
{
    vehicleNameIsSet_ = false;
}

std::string VehicleCertificateResult::getVehicleModel() const
{
    return vehicleModel_;
}

void VehicleCertificateResult::setVehicleModel(const std::string& value)
{
    vehicleModel_ = value;
    vehicleModelIsSet_ = true;
}

bool VehicleCertificateResult::vehicleModelIsSet() const
{
    return vehicleModelIsSet_;
}

void VehicleCertificateResult::unsetvehicleModel()
{
    vehicleModelIsSet_ = false;
}

std::string VehicleCertificateResult::getVin() const
{
    return vin_;
}

void VehicleCertificateResult::setVin(const std::string& value)
{
    vin_ = value;
    vinIsSet_ = true;
}

bool VehicleCertificateResult::vinIsSet() const
{
    return vinIsSet_;
}

void VehicleCertificateResult::unsetvin()
{
    vinIsSet_ = false;
}

std::string VehicleCertificateResult::getVehicleColor() const
{
    return vehicleColor_;
}

void VehicleCertificateResult::setVehicleColor(const std::string& value)
{
    vehicleColor_ = value;
    vehicleColorIsSet_ = true;
}

bool VehicleCertificateResult::vehicleColorIsSet() const
{
    return vehicleColorIsSet_;
}

void VehicleCertificateResult::unsetvehicleColor()
{
    vehicleColorIsSet_ = false;
}

std::string VehicleCertificateResult::getChassisModel() const
{
    return chassisModel_;
}

void VehicleCertificateResult::setChassisModel(const std::string& value)
{
    chassisModel_ = value;
    chassisModelIsSet_ = true;
}

bool VehicleCertificateResult::chassisModelIsSet() const
{
    return chassisModelIsSet_;
}

void VehicleCertificateResult::unsetchassisModel()
{
    chassisModelIsSet_ = false;
}

std::string VehicleCertificateResult::getChassisId() const
{
    return chassisId_;
}

void VehicleCertificateResult::setChassisId(const std::string& value)
{
    chassisId_ = value;
    chassisIdIsSet_ = true;
}

bool VehicleCertificateResult::chassisIdIsSet() const
{
    return chassisIdIsSet_;
}

void VehicleCertificateResult::unsetchassisId()
{
    chassisIdIsSet_ = false;
}

std::string VehicleCertificateResult::getChassisCertificateNumber() const
{
    return chassisCertificateNumber_;
}

void VehicleCertificateResult::setChassisCertificateNumber(const std::string& value)
{
    chassisCertificateNumber_ = value;
    chassisCertificateNumberIsSet_ = true;
}

bool VehicleCertificateResult::chassisCertificateNumberIsSet() const
{
    return chassisCertificateNumberIsSet_;
}

void VehicleCertificateResult::unsetchassisCertificateNumber()
{
    chassisCertificateNumberIsSet_ = false;
}

std::string VehicleCertificateResult::getEngineModel() const
{
    return engineModel_;
}

void VehicleCertificateResult::setEngineModel(const std::string& value)
{
    engineModel_ = value;
    engineModelIsSet_ = true;
}

bool VehicleCertificateResult::engineModelIsSet() const
{
    return engineModelIsSet_;
}

void VehicleCertificateResult::unsetengineModel()
{
    engineModelIsSet_ = false;
}

std::string VehicleCertificateResult::getEngineNumber() const
{
    return engineNumber_;
}

void VehicleCertificateResult::setEngineNumber(const std::string& value)
{
    engineNumber_ = value;
    engineNumberIsSet_ = true;
}

bool VehicleCertificateResult::engineNumberIsSet() const
{
    return engineNumberIsSet_;
}

void VehicleCertificateResult::unsetengineNumber()
{
    engineNumberIsSet_ = false;
}

std::string VehicleCertificateResult::getFuelType() const
{
    return fuelType_;
}

void VehicleCertificateResult::setFuelType(const std::string& value)
{
    fuelType_ = value;
    fuelTypeIsSet_ = true;
}

bool VehicleCertificateResult::fuelTypeIsSet() const
{
    return fuelTypeIsSet_;
}

void VehicleCertificateResult::unsetfuelType()
{
    fuelTypeIsSet_ = false;
}

std::string VehicleCertificateResult::getDisplacement() const
{
    return displacement_;
}

void VehicleCertificateResult::setDisplacement(const std::string& value)
{
    displacement_ = value;
    displacementIsSet_ = true;
}

bool VehicleCertificateResult::displacementIsSet() const
{
    return displacementIsSet_;
}

void VehicleCertificateResult::unsetdisplacement()
{
    displacementIsSet_ = false;
}

std::string VehicleCertificateResult::getPower() const
{
    return power_;
}

void VehicleCertificateResult::setPower(const std::string& value)
{
    power_ = value;
    powerIsSet_ = true;
}

bool VehicleCertificateResult::powerIsSet() const
{
    return powerIsSet_;
}

void VehicleCertificateResult::unsetpower()
{
    powerIsSet_ = false;
}

std::string VehicleCertificateResult::getEmissionStandard() const
{
    return emissionStandard_;
}

void VehicleCertificateResult::setEmissionStandard(const std::string& value)
{
    emissionStandard_ = value;
    emissionStandardIsSet_ = true;
}

bool VehicleCertificateResult::emissionStandardIsSet() const
{
    return emissionStandardIsSet_;
}

void VehicleCertificateResult::unsetemissionStandard()
{
    emissionStandardIsSet_ = false;
}

std::string VehicleCertificateResult::getFuelConsumption() const
{
    return fuelConsumption_;
}

void VehicleCertificateResult::setFuelConsumption(const std::string& value)
{
    fuelConsumption_ = value;
    fuelConsumptionIsSet_ = true;
}

bool VehicleCertificateResult::fuelConsumptionIsSet() const
{
    return fuelConsumptionIsSet_;
}

void VehicleCertificateResult::unsetfuelConsumption()
{
    fuelConsumptionIsSet_ = false;
}

std::string VehicleCertificateResult::getOverallDimensionLength() const
{
    return overallDimensionLength_;
}

void VehicleCertificateResult::setOverallDimensionLength(const std::string& value)
{
    overallDimensionLength_ = value;
    overallDimensionLengthIsSet_ = true;
}

bool VehicleCertificateResult::overallDimensionLengthIsSet() const
{
    return overallDimensionLengthIsSet_;
}

void VehicleCertificateResult::unsetoverallDimensionLength()
{
    overallDimensionLengthIsSet_ = false;
}

std::string VehicleCertificateResult::getOverallDimensionWidth() const
{
    return overallDimensionWidth_;
}

void VehicleCertificateResult::setOverallDimensionWidth(const std::string& value)
{
    overallDimensionWidth_ = value;
    overallDimensionWidthIsSet_ = true;
}

bool VehicleCertificateResult::overallDimensionWidthIsSet() const
{
    return overallDimensionWidthIsSet_;
}

void VehicleCertificateResult::unsetoverallDimensionWidth()
{
    overallDimensionWidthIsSet_ = false;
}

std::string VehicleCertificateResult::getOverallDimensionHeight() const
{
    return overallDimensionHeight_;
}

void VehicleCertificateResult::setOverallDimensionHeight(const std::string& value)
{
    overallDimensionHeight_ = value;
    overallDimensionHeightIsSet_ = true;
}

bool VehicleCertificateResult::overallDimensionHeightIsSet() const
{
    return overallDimensionHeightIsSet_;
}

void VehicleCertificateResult::unsetoverallDimensionHeight()
{
    overallDimensionHeightIsSet_ = false;
}

std::string VehicleCertificateResult::getContainerDimensionLength() const
{
    return containerDimensionLength_;
}

void VehicleCertificateResult::setContainerDimensionLength(const std::string& value)
{
    containerDimensionLength_ = value;
    containerDimensionLengthIsSet_ = true;
}

bool VehicleCertificateResult::containerDimensionLengthIsSet() const
{
    return containerDimensionLengthIsSet_;
}

void VehicleCertificateResult::unsetcontainerDimensionLength()
{
    containerDimensionLengthIsSet_ = false;
}

std::string VehicleCertificateResult::getContainerDimensionWidth() const
{
    return containerDimensionWidth_;
}

void VehicleCertificateResult::setContainerDimensionWidth(const std::string& value)
{
    containerDimensionWidth_ = value;
    containerDimensionWidthIsSet_ = true;
}

bool VehicleCertificateResult::containerDimensionWidthIsSet() const
{
    return containerDimensionWidthIsSet_;
}

void VehicleCertificateResult::unsetcontainerDimensionWidth()
{
    containerDimensionWidthIsSet_ = false;
}

std::string VehicleCertificateResult::getContainerDimensionHeight() const
{
    return containerDimensionHeight_;
}

void VehicleCertificateResult::setContainerDimensionHeight(const std::string& value)
{
    containerDimensionHeight_ = value;
    containerDimensionHeightIsSet_ = true;
}

bool VehicleCertificateResult::containerDimensionHeightIsSet() const
{
    return containerDimensionHeightIsSet_;
}

void VehicleCertificateResult::unsetcontainerDimensionHeight()
{
    containerDimensionHeightIsSet_ = false;
}

std::string VehicleCertificateResult::getSpringQuantity() const
{
    return springQuantity_;
}

void VehicleCertificateResult::setSpringQuantity(const std::string& value)
{
    springQuantity_ = value;
    springQuantityIsSet_ = true;
}

bool VehicleCertificateResult::springQuantityIsSet() const
{
    return springQuantityIsSet_;
}

void VehicleCertificateResult::unsetspringQuantity()
{
    springQuantityIsSet_ = false;
}

std::string VehicleCertificateResult::getTireQuantity() const
{
    return tireQuantity_;
}

void VehicleCertificateResult::setTireQuantity(const std::string& value)
{
    tireQuantity_ = value;
    tireQuantityIsSet_ = true;
}

bool VehicleCertificateResult::tireQuantityIsSet() const
{
    return tireQuantityIsSet_;
}

void VehicleCertificateResult::unsettireQuantity()
{
    tireQuantityIsSet_ = false;
}

std::string VehicleCertificateResult::getTireSize() const
{
    return tireSize_;
}

void VehicleCertificateResult::setTireSize(const std::string& value)
{
    tireSize_ = value;
    tireSizeIsSet_ = true;
}

bool VehicleCertificateResult::tireSizeIsSet() const
{
    return tireSizeIsSet_;
}

void VehicleCertificateResult::unsettireSize()
{
    tireSizeIsSet_ = false;
}

std::string VehicleCertificateResult::getFrontWheelTrack() const
{
    return frontWheelTrack_;
}

void VehicleCertificateResult::setFrontWheelTrack(const std::string& value)
{
    frontWheelTrack_ = value;
    frontWheelTrackIsSet_ = true;
}

bool VehicleCertificateResult::frontWheelTrackIsSet() const
{
    return frontWheelTrackIsSet_;
}

void VehicleCertificateResult::unsetfrontWheelTrack()
{
    frontWheelTrackIsSet_ = false;
}

std::string VehicleCertificateResult::getRearWheelTrack() const
{
    return rearWheelTrack_;
}

void VehicleCertificateResult::setRearWheelTrack(const std::string& value)
{
    rearWheelTrack_ = value;
    rearWheelTrackIsSet_ = true;
}

bool VehicleCertificateResult::rearWheelTrackIsSet() const
{
    return rearWheelTrackIsSet_;
}

void VehicleCertificateResult::unsetrearWheelTrack()
{
    rearWheelTrackIsSet_ = false;
}

std::string VehicleCertificateResult::getWheelbase() const
{
    return wheelbase_;
}

void VehicleCertificateResult::setWheelbase(const std::string& value)
{
    wheelbase_ = value;
    wheelbaseIsSet_ = true;
}

bool VehicleCertificateResult::wheelbaseIsSet() const
{
    return wheelbaseIsSet_;
}

void VehicleCertificateResult::unsetwheelbase()
{
    wheelbaseIsSet_ = false;
}

std::string VehicleCertificateResult::getAxleLoad() const
{
    return axleLoad_;
}

void VehicleCertificateResult::setAxleLoad(const std::string& value)
{
    axleLoad_ = value;
    axleLoadIsSet_ = true;
}

bool VehicleCertificateResult::axleLoadIsSet() const
{
    return axleLoadIsSet_;
}

void VehicleCertificateResult::unsetaxleLoad()
{
    axleLoadIsSet_ = false;
}

std::string VehicleCertificateResult::getAxleQuantity() const
{
    return axleQuantity_;
}

void VehicleCertificateResult::setAxleQuantity(const std::string& value)
{
    axleQuantity_ = value;
    axleQuantityIsSet_ = true;
}

bool VehicleCertificateResult::axleQuantityIsSet() const
{
    return axleQuantityIsSet_;
}

void VehicleCertificateResult::unsetaxleQuantity()
{
    axleQuantityIsSet_ = false;
}

std::string VehicleCertificateResult::getSteeringForm() const
{
    return steeringForm_;
}

void VehicleCertificateResult::setSteeringForm(const std::string& value)
{
    steeringForm_ = value;
    steeringFormIsSet_ = true;
}

bool VehicleCertificateResult::steeringFormIsSet() const
{
    return steeringFormIsSet_;
}

void VehicleCertificateResult::unsetsteeringForm()
{
    steeringFormIsSet_ = false;
}

std::string VehicleCertificateResult::getTotalWeight() const
{
    return totalWeight_;
}

void VehicleCertificateResult::setTotalWeight(const std::string& value)
{
    totalWeight_ = value;
    totalWeightIsSet_ = true;
}

bool VehicleCertificateResult::totalWeightIsSet() const
{
    return totalWeightIsSet_;
}

void VehicleCertificateResult::unsettotalWeight()
{
    totalWeightIsSet_ = false;
}

std::string VehicleCertificateResult::getEquipmentWeight() const
{
    return equipmentWeight_;
}

void VehicleCertificateResult::setEquipmentWeight(const std::string& value)
{
    equipmentWeight_ = value;
    equipmentWeightIsSet_ = true;
}

bool VehicleCertificateResult::equipmentWeightIsSet() const
{
    return equipmentWeightIsSet_;
}

void VehicleCertificateResult::unsetequipmentWeight()
{
    equipmentWeightIsSet_ = false;
}

std::string VehicleCertificateResult::getMaximumLadenMass() const
{
    return maximumLadenMass_;
}

void VehicleCertificateResult::setMaximumLadenMass(const std::string& value)
{
    maximumLadenMass_ = value;
    maximumLadenMassIsSet_ = true;
}

bool VehicleCertificateResult::maximumLadenMassIsSet() const
{
    return maximumLadenMassIsSet_;
}

void VehicleCertificateResult::unsetmaximumLadenMass()
{
    maximumLadenMassIsSet_ = false;
}

std::string VehicleCertificateResult::getMassUtilizationCoefficient() const
{
    return massUtilizationCoefficient_;
}

void VehicleCertificateResult::setMassUtilizationCoefficient(const std::string& value)
{
    massUtilizationCoefficient_ = value;
    massUtilizationCoefficientIsSet_ = true;
}

bool VehicleCertificateResult::massUtilizationCoefficientIsSet() const
{
    return massUtilizationCoefficientIsSet_;
}

void VehicleCertificateResult::unsetmassUtilizationCoefficient()
{
    massUtilizationCoefficientIsSet_ = false;
}

std::string VehicleCertificateResult::getTractionWeight() const
{
    return tractionWeight_;
}

void VehicleCertificateResult::setTractionWeight(const std::string& value)
{
    tractionWeight_ = value;
    tractionWeightIsSet_ = true;
}

bool VehicleCertificateResult::tractionWeightIsSet() const
{
    return tractionWeightIsSet_;
}

void VehicleCertificateResult::unsettractionWeight()
{
    tractionWeightIsSet_ = false;
}

std::string VehicleCertificateResult::getMaximumLoadMass() const
{
    return maximumLoadMass_;
}

void VehicleCertificateResult::setMaximumLoadMass(const std::string& value)
{
    maximumLoadMass_ = value;
    maximumLoadMassIsSet_ = true;
}

bool VehicleCertificateResult::maximumLoadMassIsSet() const
{
    return maximumLoadMassIsSet_;
}

void VehicleCertificateResult::unsetmaximumLoadMass()
{
    maximumLoadMassIsSet_ = false;
}

std::string VehicleCertificateResult::getCabPassengerCapacity() const
{
    return cabPassengerCapacity_;
}

void VehicleCertificateResult::setCabPassengerCapacity(const std::string& value)
{
    cabPassengerCapacity_ = value;
    cabPassengerCapacityIsSet_ = true;
}

bool VehicleCertificateResult::cabPassengerCapacityIsSet() const
{
    return cabPassengerCapacityIsSet_;
}

void VehicleCertificateResult::unsetcabPassengerCapacity()
{
    cabPassengerCapacityIsSet_ = false;
}

std::string VehicleCertificateResult::getPassengerCapacity() const
{
    return passengerCapacity_;
}

void VehicleCertificateResult::setPassengerCapacity(const std::string& value)
{
    passengerCapacity_ = value;
    passengerCapacityIsSet_ = true;
}

bool VehicleCertificateResult::passengerCapacityIsSet() const
{
    return passengerCapacityIsSet_;
}

void VehicleCertificateResult::unsetpassengerCapacity()
{
    passengerCapacityIsSet_ = false;
}

std::string VehicleCertificateResult::getMaxDesignSpeed() const
{
    return maxDesignSpeed_;
}

void VehicleCertificateResult::setMaxDesignSpeed(const std::string& value)
{
    maxDesignSpeed_ = value;
    maxDesignSpeedIsSet_ = true;
}

bool VehicleCertificateResult::maxDesignSpeedIsSet() const
{
    return maxDesignSpeedIsSet_;
}

void VehicleCertificateResult::unsetmaxDesignSpeed()
{
    maxDesignSpeedIsSet_ = false;
}

std::string VehicleCertificateResult::getManufactureDate() const
{
    return manufactureDate_;
}

void VehicleCertificateResult::setManufactureDate(const std::string& value)
{
    manufactureDate_ = value;
    manufactureDateIsSet_ = true;
}

bool VehicleCertificateResult::manufactureDateIsSet() const
{
    return manufactureDateIsSet_;
}

void VehicleCertificateResult::unsetmanufactureDate()
{
    manufactureDateIsSet_ = false;
}

Object VehicleCertificateResult::getConfidence() const
{
    return confidence_;
}

void VehicleCertificateResult::setConfidence(const Object& value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool VehicleCertificateResult::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void VehicleCertificateResult::unsetconfidence()
{
    confidenceIsSet_ = false;
}

Object VehicleCertificateResult::getTextLocation() const
{
    return textLocation_;
}

void VehicleCertificateResult::setTextLocation(const Object& value)
{
    textLocation_ = value;
    textLocationIsSet_ = true;
}

bool VehicleCertificateResult::textLocationIsSet() const
{
    return textLocationIsSet_;
}

void VehicleCertificateResult::unsettextLocation()
{
    textLocationIsSet_ = false;
}

}
}
}
}
}


